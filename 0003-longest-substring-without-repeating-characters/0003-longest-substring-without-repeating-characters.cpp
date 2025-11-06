class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        string longs="";
        string str;
        for(int i=0;i<s.length();i++)
        {
         str="";
            for(int j=i;j<s.length();j++)
            {
                if(str.find(s[j])==std::string::npos)
                {
                    str.push_back(s[j]);
                    if(str.length()>longs.length())
                    {
                        longs=str;
                    }
                }
                else
                {
                    break;
                }
            }
        }
        return (longs.length());
    }
};