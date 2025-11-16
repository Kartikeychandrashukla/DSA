class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string word="";
        int minsize=strs[0].length();
        int index=0;
        for(int i=0;i<strs.size();i++)
        {
           if(minsize>strs[i].length())
           {
            minsize=strs[i].length();
            index=i;
           }
        }
int n=strs[index].length();
for(int i=0;i<n;i++)
{
   char  ch=strs[index][i];
  int c=0;
    for(auto x:strs)
    {
        if(ch==x[i])
        {
            c++;
        }
        else
        {
            break;
        }
    }
    if(c==strs.size())
    {
        word+=ch;
    }
    else
    {
        break;
    }
}
if(word.length()>0)
{
    return word;
}
return "";
    }
};