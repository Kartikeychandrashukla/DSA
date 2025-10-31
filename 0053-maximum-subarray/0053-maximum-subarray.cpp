class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        if(nums.size()==1)
        {
            return nums[0];
        }
        
             int right=1;
             int maxsum=nums[0];
int sum=nums[0];
             while( right<nums.size())
             {
               sum=max(nums[right],sum+nums[right]);
   maxsum=max(maxsum,sum);
   right++;
             }
return maxsum;

    }
};