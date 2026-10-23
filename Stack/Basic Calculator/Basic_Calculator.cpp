#include <iostream>
#include <string>
#include <stack>
#include <cctype>

using namespace std;

class Solution {
public:
    int calculate(string s) {
        stack<int> st;
        long long current_number = 0;
        int result = 0;
        int sign = 1; // 1 means positive, -1 means negative

        for (int i = 0; i < s.length(); ++i) {
            char c = s[i];

            if (isdigit(c)) {
                current_number = current_number * 10 + (c - '0');
            } else if (c == '+') {
                result += sign * current_number;
                current_number = 0;
                sign = 1;
            } else if (c == '-') {
                result += sign * current_number;
                current_number = 0;
                sign = -1;
            } else if (c == '(') {
                // Push the current result and sign onto the stack
                st.push(result);
                st.push(sign);
                // Reset for the inner expression
                result = 0;
                sign = 1;
            } else if (c == ')') {
                result += sign * current_number;
                current_number = 0;
                
                // Pop the sign and previous result from the stack
                int prev_sign = st.top(); st.pop();
                int prev_result = st.top(); st.pop();

                result = prev_result + prev_sign * result;
            }
        }
        
        result += sign * current_number;
        return result;
    }
};

int main() {
    Solution solution;
    
    string test1 = " 2-1 + 2 ";
    string test2 = "(1+(4+5+2)-3)+(6+8)";
    
    cout << "Test 1 Result: " << solution.calculate(test1) << " (Expected: 3)" << endl;
    cout << "Test 2 Result: " << solution.calculate(test2) << " (Expected: 23)" << endl;
    
    return 0;
}