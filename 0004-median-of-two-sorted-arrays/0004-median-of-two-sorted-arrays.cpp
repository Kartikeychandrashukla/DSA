class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        double answer=0.0;
        int i=0;
        int j=0;
        vector<int>mergedarray;
        while(i<nums1.size() && j<nums2.size())
        {
if(nums1[i]<nums2[j])
{
    mergedarray.push_back(nums1[i]);
    i++;
}
else
{
    mergedarray.push_back(nums2[j]);
    j++;
}
        }
if(i!=nums1.size())
{
    while(i<nums1.size())
    {
        mergedarray.push_back(nums1[i]);
        i++;
    }
}
else
{
  while(j<nums2.size())
    {
        mergedarray.push_back(nums2[j]);
        j++;
    }  
}
int n=mergedarray.size();
  if (n % 2 == 1) {
            // Odd length, return the middle element
            answer= mergedarray[n / 2];
        } else {
            // Even length, return the average of the two middle elements
            answer= (mergedarray[n / 2 - 1] + mergedarray[n / 2]) / 2.0;
        }
        return answer;
    }
};