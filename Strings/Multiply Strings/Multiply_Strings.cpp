#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    string multiply(string num1, string num2) {
        if (num1 == "0" || num2 == "0") return "0";
        
        int n = num1.size();
        int m = num2.size();
        vector<int> res(n + m, 0);
        
        for (int i = n - 1; i >= 0; i--) {
            for (int j = m - 1; j >= 0; j--) {
                int mul = (num1[i] - '0') * (num2[j] - '0');
                int sum = mul + res[i + j + 1];
                
                res[i + j + 1] = sum % 10;
                res[i + j] += sum / 10;
            }
        }
        
        string result = "";
        for (int num : res) {
            if (!(result.empty() && num == 0)) {
                result.push_back(num + '0');
            }
        }
        
        return result.empty() ? "0" : result;
    }
};

int main() {
    Solution sol;
    
    // Test Case 1
    string num1_1 = "2";
    string num2_1 = "3";
    cout << "Input: num1 = \"" << num1_1 << "\", num2 = \"" << num2_1 << "\"" << endl;
    cout << "Output: \"" << sol.multiply(num1_1, num2_1) << "\"" << endl;
    
    // Test Case 2
    string num1_2 = "123";
    string num2_2 = "456";
    cout << "Input: num1 = \"" << num1_2 << "\", num2 = \"" << num2_2 << "\"" << endl;
    cout << "Output: \"" << sol.multiply(num1_2, num2_2) << "\"" << endl;
    
    return 0;
}