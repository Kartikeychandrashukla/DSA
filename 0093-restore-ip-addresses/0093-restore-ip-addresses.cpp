class Solution {
public:
    vector<string> result;

    bool isValid(string &part) {
        if (part.size() > 3 || part.empty()) return false;
        if (part[0] == '0' && part.size() > 1) return false;
        int num = stoi(part);
        return num >= 0 && num <= 255;
    }

    void backtrack(string &s, int start, int dots, string current) {
        // Base condition: 3 dots means we should have 4 parts
        if (dots == 3) {
            string lastPart = s.substr(start);
            if (isValid(lastPart))
                result.push_back(current + lastPart);
            return;
        }

        for (int len = 1; len <= 3 && start + len < s.size(); ++len) {
            string part = s.substr(start, len);
            if (isValid(part)) {
                backtrack(s, start + len, dots + 1, current + part + ".");
            }
        }
    }

    vector<string> restoreIpAddresses(string s) {
        result.clear();
        if (s.size() < 4 || s.size() > 12) return {};
        backtrack(s, 0, 0, "");
        return result;
    }
};
