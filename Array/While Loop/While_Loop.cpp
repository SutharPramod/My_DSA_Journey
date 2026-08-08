#include <iostream>

using namespace std;

class Solution {
public:
    void printUtility(int x) {
        while (x >= 0) {
            cout << x << " ";
            x--;
        }
    }
};

int main() {
    Solution sol;

    // Test Case 1: x = 3
    cout << "Test Case 1 (x = 3): ";
    sol.printUtility(3);
    cout << endl; // Output: 3 2 1 0 

    // Test Case 2: x = 5
    cout << "Test Case 2 (x = 5): ";
    sol.printUtility(5);
    cout << endl; // Output: 5 4 3 2 1 0 

    return 0;
}