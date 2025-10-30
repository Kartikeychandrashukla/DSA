class Solution {
public:
    int search(vector<int>& nums, int target) {
        
          int left=0;
          int right=nums.size()-1;

          while(left<=right)
          {
             int med=left+(right-left)/2;
if(nums[med]==target)
{
    return med;
}
             if(nums[med]>=nums[left])
             {
                if(nums[left]<=target && target<nums[med])
                {
                    right=med-1;
                }
                else
                {
                    left=med+1;
                }

             }
else
{
if(nums[med]<target && target<=nums[right])
{
    left=med+1;
}
else
{
    right=med-1;
}

}
          }
return -1;

    }
};