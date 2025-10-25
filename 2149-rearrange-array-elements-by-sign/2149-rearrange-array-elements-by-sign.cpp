class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int>positive;
        vector<int>negative;
        int i=0;
        int j=0;
        for(auto x:nums)
        {
            if(x>0)
            {
               positive.push_back(x);
            }
            else
            {
                negative.push_back(x);
            }
        }
        int l=0;
        int p=0;
int n=nums.size();
vector<int>result;
for(int i=0;i<n;i++)
{
    if((i&1)==0)
    {
result.push_back(positive[l++]);
    }
    else
    {
   result.push_back(negative[p++]);     
    }
}
return result;
    }
};