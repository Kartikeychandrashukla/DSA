class Solution {
public:
    string multiply(string num1, string num2) {
        // If either number is "0", the result is "0"
        if (num1 == "0" || num2 == "0") return "0";
        
        int n = num1.size();
        int m = num2.size();
        vector<int> result(n + m, 0); // to store intermediate results
        
        // Traverse from the end (least significant digit)
        for (int i = n - 1; i >= 0; i--) {
            for (int j = m - 1; j >= 0; j--) {
                int mul = (num1[i] - '0') * (num2[j] - '0'); // multiply digits
                int sum = mul + result[i + j + 1]; // add existing value
                
                result[i + j + 1] = sum % 10;      // store the last digit
                result[i + j] += sum / 10;         // carry to previous place
            }
        }
        
        // Convert vector to string (skipping leading zeros)
        string ans = "";
        int i = 0;
        while (i < result.size() && result[i] == 0) i++;
        for (; i < result.size(); i++) ans.push_back(result[i] + '0');
        
        return ans.empty() ? "0" : ans;
    }
};
