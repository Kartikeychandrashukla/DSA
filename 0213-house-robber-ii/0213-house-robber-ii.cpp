class Solution {
public:
    int rob(vector<int>& nums) {

int n=nums.size();
    if(n==0)return 0;
    if(n==1)return nums[0];

    int case1=solveit(nums,0,n-2);
    int case2=solveit(nums,1,n-1);

    return max(case1,case2);
    }

    int solveit(vector<int>&nums,int start, int end)
    {
        vector<int>dp(nums.size()+1,0);
if(start==0)
{
        dp[0]=nums[0];
        dp[1]=max(nums[1],nums[0]);
}
else
{
    dp[0]=0;
    dp[1]=nums[1];
}
        for(int i=2;i<=end;i++)
        {
dp[i]=max(dp[i-1],nums[i]+dp[i-2]);
        }
return dp[end];

    }
};