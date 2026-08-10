#include <iostream>

using namespace std;

class Solution {
public:
    int nthTermOfAP(int a1, int a2, int n) {
        int d = a2 - a1;
        return a1 + (n - 1) * d;
    }
};

int main() {
    Solution sol;

    // Test Case 1
    int a1 = 2, a2 = 3, n1 = 4;
    cout << "Test Case 1: " << sol.nthTermOfAP(a1, a2, n1) << " (Expected: 5)" << endl;

    // Test Case 2
    int a3 = 1, a4 = 3, n2 = 10;
    cout << "Test Case 2: " << sol.nthTermOfAP(a3, a4, n2) << " (Expected: 19)" << endl;

    return 0;
}