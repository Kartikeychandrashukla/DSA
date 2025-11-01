class Solution {
public:
    int rob(vector<int>& nums) {
        int n=nums.size();
vector<int>dp(nums.size()+1,0);
       if(n==0)return 0;
       if(n==1)return nums[0];
       if(n==2)return max(nums[0],nums[1]);
       n=2;
       dp[0]=nums[0];
       dp[1]=max(nums[0],nums[1]);
        while(n!=nums.size())
        {
dp[n]=max(dp[n-1],nums[n]+dp[n-2]);
n++;
        }
        return dp[n-1];
    }
};