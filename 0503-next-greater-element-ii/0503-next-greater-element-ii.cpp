class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        int n = nums.size();
        vector<int> result(n, -1);
        stack<int> st; // stack stores indices
        
        for (int i = 2 * n - 1; i >= 0; i--) {
            int currIndex = i % n;
            
            // Pop all smaller or equal elements
            while (!st.empty() && nums[st.top()] <= nums[currIndex]) {
                st.pop();
            }
            
            // Only update during first pass
            if (i < n && !st.empty()) {
                result[currIndex] = nums[st.top()];
            }
            
            // Push current index to stack
            st.push(currIndex);
        }
        
        return result;
    }
};
