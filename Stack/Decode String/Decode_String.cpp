#include <iostream>
#include <string>
#include <vector>
#include <stack>
#include <algorithm>

using namespace std;

class Solution {
public:
    string decodeString(string s) {
        stack<int> countStack;
        stack<string> stringStack;
        string currentStr = "";
        int k = 0;

        for (char c : s) {
            if (isdigit(c)) {
                k = k * 10 + (c - '0');
            } else if (c == '[') {
                countStack.push(k);
                stringStack.push(currentStr);
                currentStr = "";
                k = 0;
            } else if (c == ']') {
                int repeatTimes = countStack.top();
                countStack.pop();
                string decodedString = stringStack.top();
                stringStack.pop();

                for (int i = 0; i < repeatTimes; ++i) {
                    decodedString += currentStr;
                }
                currentStr = decodedString;
            } else {
                currentStr += c;
            }
        }
        return currentStr;
    }
};

int main() {
    Solution sol;
    
    string s1 = "3[a]2[bc]";
    cout << "Input: " << s1 << endl;
    cout << "Output: " << sol.decodeString(s1) << endl; // Expected: aaabcbc

    string s2 = "3[a2[c]]";
    cout << "Input: " << s2 << endl;
    cout << "Output: " << sol.decodeString(s2) << endl; // Expected: accaccacc

    return 0;
}