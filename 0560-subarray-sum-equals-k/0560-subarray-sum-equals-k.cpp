class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
       unordered_map<int,int> prefix;

        int counter=0;
        prefix[0]=1;
int sum=0;
        for(int i=0;i<nums.size();i++)
        {
            sum+=nums[i];
            if(prefix[sum-k])
            {
                counter+=prefix[sum-k];
            }
            prefix[sum]++;

        }
        return counter;
    }
};