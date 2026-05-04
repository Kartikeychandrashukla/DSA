#include<cctype>
class Solution {
public:
    bool isPalindrome(string str){
      
transform(str.begin(), str.end(), str.begin(), ::tolower); // to lower
   
        vector<char>result;
        for(auto ch:str)
        {
if(isalnum(ch))
{

result.push_back(ch);
}
        }
int left=0;
int right=result.size()-1;

while(left<=right)
{
    if(result[left]!=result[right])
    {
        return false;
    }
    left++;
    right--;
}
    return true;
    }
};