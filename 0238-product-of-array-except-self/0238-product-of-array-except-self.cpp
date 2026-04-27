class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        
        vector<int>v_prefix(nums.size(),1);
        vector<int>v_suffix(nums.size(),1);
        v_prefix[0]=nums[0];

        for(int i=1;i<nums.size();i++)
        {
            v_prefix[i]=nums[i]*v_prefix[i-1];
        }

v_suffix[nums.size()-1]=nums[nums.size()-1];

        for(int j=nums.size()-2;j>=0;j--)
        {
          v_suffix[j]=nums[j]*v_suffix[j+1];
        }
nums[0]=v_suffix[1];
nums[nums.size()-1]=v_prefix[nums.size()-2];

        for(int k=1;k<=nums.size()-2;k++)
        {
             nums[k]=v_prefix[k-1]*v_suffix[k+1];
        }

        return nums;
    }
};