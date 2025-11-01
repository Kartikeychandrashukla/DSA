class Solution {
      
public:

int calculate(int n, vector<int>&dp)
{

while(n!=1)
{
   if(dp[n]!=0)
   {
    return dp[n];
   }
dp[n]=calculate(n-1,dp)+calculate(n-2,dp);
}
return dp[n];
}
    int climbStairs(int n) {
        vector<int>dp(n+1,0);
        dp[0]=1;
        dp[1]=1;
int ways=calculate(n,dp);
return ways;
        
    }
};