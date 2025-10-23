class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int>st1;
        unordered_set<int>result;
        for(auto x:nums1)
        {
            st1.insert(x);
        }
    for(auto nums:nums2)
    {
        if(st1.find(nums)!=st1.end())
        {
            result.insert(nums);
        }
    }
      return vector<int>(result.begin(),result.end());

    }
};