class Solution {
public:
    string reverseWords(string s) {
        vector<string>words;
        string word="";

   int start=s.find_first_not_of(' ');
   int end=s.find_last_not_of(' ');
   s=s.substr(start,end-start+1);

   for(int i=0;i<s.length();i++)
   {
    if(isalnum(s[i]))
    {
        word.push_back(s[i]);
    }
    if(s[i]==' ' && s[i-1]!=' ')
    {
        words.push_back(word);
        words.push_back(" ");
        word="";
    }
    else if(i==(s.length()-1))
    {
        words.push_back(word);
    }
   }
   reverse(words.begin(),words.end());
   string ans = "";
        for (int i = 0; i < words.size(); i++) {
            ans += words[i];
        }
   return ans;
     }
};