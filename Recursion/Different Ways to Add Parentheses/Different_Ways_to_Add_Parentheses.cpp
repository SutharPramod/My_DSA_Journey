#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

class Solution {
public:
    vector<int> diffWaysToCompute(string expression) {
        vector<int> results;
        bool isNumber = true;
        
        for (int i = 0; i < expression.size(); ++i) {
            char c = expression[i];
            if (c == '+' || c == '-' || c == '*') {
                isNumber = false;
                vector<int> left = diffWaysToCompute(expression.substr(0, i));
                vector<int> right = diffWaysToCompute(expression.substr(i + 1));
                
                for (int l : left) {
                    for (int r : right) {
                        if (c == '+') {
                            results.push_back(l + r);
                        } else if (c == '-') {
                            results.push_back(l - r);
                        } else if (c == '*') {
                            results.push_back(l * r);
                        }
                    }
                }
            }
        }
        
        if (isNumber) {
            results.push_back(stoi(expression));
        }
        
        return results;
    }
};

int main() {
    Solution sol;
    
    // Test Case 1
    string expr1 = "2-1-1";
    vector<int> res1 = sol.diffWaysToCompute(expr1);
    cout << "Results for " << expr1 << ": ";
    for (int val : res1) {
        cout << val << " ";
    }
    cout << endl;
    
    // Test Case 2
    string expr2 = "2*3-4*5";
    vector<int> res2 = sol.diffWaysToCompute(expr2);
    cout << "Results for " << expr2 << ": ";
    for (int val : res2) {
        cout << val << " ";
    }
    cout << endl;
    
    return 0;
}