class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int>temp;
if(m==0)
{
    for(int i=0;i<n;i++)
    {
        nums1[i]=nums2[i];
    }
}
if(n==0)
{
    return;
}

        int left=0;
        int right=0;
        while(left<=m-1 && right<=n-1)
        {
            if(nums1[left]<=nums2[right])
            {
                temp.push_back(nums1[left]);
                left++;
            }
            else
            {
                temp.push_back(nums2[right]);
                right++;
            }
        }

while(left<=m-1)
{
    temp.push_back(nums1[left]);
                left++; 
}
while(right<=n-1)
{
temp.push_back(nums2[right]);
                right++;

}


for(int i=0;i<temp.size();i++)
{
    nums1[i]=temp[i];
}

    }
};