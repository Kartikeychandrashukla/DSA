class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        
        unordered_map<int ,int>mp;
        int count=0;
mp[0]=1;
int sum=0;
        for(int i=0;i<nums.size();i++)
        {
           nums[i]+=sum;
sum=nums[i];
        }

        for(int i=0;i<nums.size();i++)
        {
            if(mp.find(nums[i]-k)!=mp.end())
            {
               count+=mp[nums[i]-k];
            }

            mp[nums[i]]++;
        }
        return count;
    }
};