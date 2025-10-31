class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& nums) 
    {
        vector<int>answer(nums.size(),-1);
        stack<pair<int,int>>st;

        for(int i=nums.size()-1;i>=0;i--)

{
   while(!st.empty() && st.top().first<=nums[i])
   {
    st.pop();
   }

   if(st.empty())
   {
      answer[i]=0;
   }
   else
   {
    answer[i]=st.top().second-i;
   }
st.push({nums[i],i});

}

return answer;
    }
};