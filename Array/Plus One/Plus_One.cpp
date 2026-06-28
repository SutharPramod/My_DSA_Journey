#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size();
        int carry = 0;
        digits[n-1] = digits[n-1] + 1;
        carry = digits[n-1]/10;
        digits[n-1] %= 10;
        int i = n - 2;

        while(carry != 0 && i >= 0){
            digits[i] += carry;
            carry = digits[i]/10;
            digits[i] %= 10;
            i--;
        }

        if(carry == 1){
            digits.insert(digits.begin(),1);
        }

        return digits;
    }
};

/**
 * Helper function to print a vector.
 */
void printVector(const vector<int>& v) {
    cout << "[";
    for (size_t i = 0; i < v.size(); ++i) {
        cout << v[i] << (i == v.size() - 1 ? "" : ", ");
    }
    cout << "]" << endl;
}

int main() {
    Solution sol;

    // Test Case 1: Standard increment without carries
    vector<int> d1 = {1, 2, 3};
    // Expected Output: [1, 2, 4]

    // Test Case 2: Chain reaction carry
    vector<int> d2 = {1, 9, 9};
    // Expected Output: [2, 0, 0]

    // Test Case 3: All nines (Array size increases)
    vector<int> d3 = {9, 9, 9};
    // Expected Output: [1, 0, 0, 0]

    cout << "Test Case 1: "; printVector(sol.plusOne(d1));
    cout << "Test Case 2: "; printVector(sol.plusOne(d2));
    cout << "Test Case 3: "; printVector(sol.plusOne(d3));

    return 0;
}