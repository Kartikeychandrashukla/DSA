class Solution {
public:
    int lengthOfLongestSubstring(string s) {
         vector<int> up(256,0);
        int max_length=0;
int left=0;
int right=0;
      while(right<s.length())
      {
        up[s[right]]++;
        while(up[s[right]]>1)
        {
            up[s[left]]--;
            left++;
        }
        max_length=max(max_length,right-left+1);
        right++;
      }

      return max_length;
    }
};