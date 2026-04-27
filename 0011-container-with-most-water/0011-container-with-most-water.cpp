class Solution {
public:
    int maxArea(vector<int>& height) {
        
        int start=0;
        int end=height.size()-1;
int max_water=0;
        while(start<end)
        {
max_water=max((end-start)*min(height[start],height[end]),max_water);
if(height[start]<=height[end])
{
    start++;
}
else
{
    end--;
}
        }

        return max_water;
    }
};