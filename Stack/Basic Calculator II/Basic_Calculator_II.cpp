#include <iostream>
#include <string>
#include <stack>
#include <cctype>

using namespace std;

class Solution {
public:
    int calculate(string s) {
        stack<int> st;
        long long currentNumber = 0;
        char operation = '+';
        
        for (int i = 0; i < s.length(); ++i) {
            char currentChar = s[i];
            
            if (isdigit(currentChar)) {
                currentNumber = currentNumber * 10 + (currentChar - '0');
            }
            
            if ((!isdigit(currentChar) && !isspace(currentChar)) || i == s.length() - 1) {
                if (operation == '+') {
                    st.push(currentNumber);
                } else if (operation == '-') {
                    st.push(-currentNumber);
                } else if (operation == '*') {
                    int topVal = st.top();
                    st.pop();
                    st.push(topVal * currentNumber);
                } else if (operation == '/') {
                    int topVal = st.top();
                    st.pop();
                    st.push(topVal / currentNumber);
                }
                operation = currentChar;
                currentNumber = 0;
            }
        }
        
        int result = 0;
        while (!st.empty()) {
            result += st.top();
            st.pop();
        }
        
        return result;
    }
};

int main() {
    Solution solution;
    
    // Test Case 1
    string s1 = "3+2*2";
    cout << "Expression: " << s1 << endl;
    cout << "Output: " << solution.calculate(s1) << " (Expected: 7)" << endl;
    
    // Test Case 2
    string s2 = " 3+5 / 2 ";
    cout << "Expression: " << s2 << endl;
    cout << "Output: " << solution.calculate(s2) << " (Expected: 5)" << endl;
    
    return 0;
}