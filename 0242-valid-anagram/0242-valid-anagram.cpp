class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int>results(26,0);
        vector<int>resultt(26,0);

        for(auto x:s)
        {
            results[x-'a']++;
        }
           for(auto y:t)
        {
            resultt[y-'a']++;
        }

        if(resultt==results)
        return true;

        return false;
    }
};