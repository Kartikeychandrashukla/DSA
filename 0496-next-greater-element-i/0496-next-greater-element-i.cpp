class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
stack<int>st;
unordered_map<int,int>mp;
        int n=nums2.size()-1;
        for(int i=n;i>=0;i--)
        {
            while(!st.empty() && st.top()<=nums2[i])
        {
            st.pop();
        }
        if(st.empty())
        {
mp[nums2[i]]=-1;
        }
        else
        {
            mp[nums2[i]]=st.top();
        }
st.push(nums2[i]);
        }

vector<int>ans;
for(auto x:nums1)
{
if(find(nums2.begin(),nums2.end(),x)!=nums2.end())
{
    ans.push_back(mp[x]);
}
}
return ans;
    }
};