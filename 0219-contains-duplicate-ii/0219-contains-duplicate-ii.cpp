class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
       int left=0;
       int right=0;
         unordered_set<int>window;
   while( right<=nums.size()-1)
   {
    if(window.find(nums[right])!=window.end())
    {
        return true;
    }
    window.insert(nums[right]);
    right++;
if(window.size()>k)
{
window.erase(nums[left]);
left++;
}
       } 
       return false;
    }
};