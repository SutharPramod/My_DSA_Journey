#include <iostream>

using namespace std;

class Solution {
public:
    bool isPowerOfThree(int n) {
        if (n <= 0) {
            return false;
        }
        return (1162261467 % 3) == 0;
    }
};

int main() {
    Solution solution;
    
    // Test Case 1
    int n1 = 27;
    cout << "Input: n = " << n1 << endl;
    cout << "Output: " << (solution.isPowerOfThree(n1) ? "true" : "false") << endl;
    
    // Test Case 2
    int n2 = 0;
    cout << "Input: n = " << n2 << endl;
    cout << "Output: " << (solution.isPowerOfThree(n2) ? "true" : "false") << endl;

    // Test Case 3
    int n3 = 9;
    cout << "Input: n = " << n3 << endl;
    cout << "Output: " << (solution.isPowerOfThree(n3) ? "true" : "false") << endl;

    return 0;
}