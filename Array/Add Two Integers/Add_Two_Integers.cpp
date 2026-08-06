#include <iostream>

using namespace std;

class Solution {
public:
    int sum(int num1, int num2) {
        return num1 + num2;
    }
};

int main() {
    Solution sol;

    // Test Case 1
    int num1 = 12, num2 = 5;
    cout << "Test Case 1: " << sol.sum(num1, num2) << " (Expected: 17)" << endl;

    // Test Case 2
    int num3 = -10, num4 = 4;
    cout << "Test Case 2: " << sol.sum(num3, num4) << " (Expected: -6)" << endl;

    return 0;
}