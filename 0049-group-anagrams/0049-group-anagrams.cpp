class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>>mp;
vector<vector<string>>result;
        for(auto s:strs)
        {
            string key=s;
            sort(key.begin(),key.end());
            mp[key].push_back(s);
        }

        for(auto it:mp)
        {
result.push_back(it.second);
        }
        return result;
    }
};