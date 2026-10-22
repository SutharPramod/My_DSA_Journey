#include <iostream>

using namespace std;

class Solution {
public:
    int numberOfSteps(int num) {
        int steps = 0;
        while (num > 0) {
            if (num % 2 == 0) {
                num /= 2;
            } else {
                num -= 1;
            }
            steps++;
        }
        return steps;
    }
};

int main() {
    Solution sol;
    
    // Test Case 1
    int num1 = 14;
    cout << "Input: " << num1 << endl;
    cout << "Output: " << sol.numberOfSteps(num1) << " (Expected: 6)" << endl;
    
    // Test Case 2
    int num2 = 8;
    cout << "Input: " << num2 << endl;
    cout << "Output: " << sol.numberOfSteps(num2) << " (Expected: 4)" << endl;
    
    return 0;
}