#include<algorithm>
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
       int zerocounter=0;
       // countng number of zeroes
       for(auto x:nums)
       {
        if(x==0)
        {
            zerocounter++;
        }
       } 

int i=0;

for(int j=0;j<nums.size();j++)
{
    if(nums[j]!=0)
    {
       int t=nums[i];
       nums[i]=nums[j];
       nums[j]=t;
        i++; 
    }
}




    }
};