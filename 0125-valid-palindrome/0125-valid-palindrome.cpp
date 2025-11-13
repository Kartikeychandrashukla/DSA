class Solution {
public:
    bool isPalindrome(string s) {
        string result="";
        for(int i=0;i<s.length();i++)
        {
            if(isalnum(s[i]))   // check whether it alphabet and numerical or not
            {
result.push_back(s[i]);
            }
        }
        transform(result.begin(),result.end(),result.begin(),::tolower);
        string revresult=result;
     reverse(revresult.begin(),revresult.end());
        if(revresult==result)
        {
            return true;
    }
    return false;
    }
};