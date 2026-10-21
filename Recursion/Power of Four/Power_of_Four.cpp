#include <iostream>

using namespace std;

class Solution {
public:
    bool isPowerOfFour(int n) {
        if (n <= 0) return false;
        return ((n & (n - 1)) == 0) && ((n % 3) == 1) ;
    }
};

int main() {
    Solution solution;
    
    // Test Case 1
    int n1 = 16;
    cout << "Input: " << n1 << endl;
    cout << "Output: " << (solution.isPowerOfFour(n1) ? "true" : "false") << endl;
    
    // Test Case 2
    int n2 = 5;
    cout << "Input: " << n2 << endl;
    cout << "Output: " << (solution.isPowerOfFour(n2) ? "true" : "false") << endl;

    // Test Case 3
    int n3 = 64;
    cout << "Input: " << n3 << endl;
    cout << "Output: " << (solution.isPowerOfFour(n3) ? "true" : "false") << endl;

    return 0;
}