#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k) {
        int n = num.size();
        int carry = 0;
        reverse(num.begin(), num.end());
        for (int i = 0; i < n; i++) {
            int r = k % 10;
            k /= 10;
            int val = num[i] + r + carry;
            carry = val / 10;
            num[i] = val % 10;
        }

        if (k > 0) {
            while (k > 0) {
                int r = k % 10;
                if (carry != 0)
                    r += carry;
                carry = r / 10;
                k /= 10;
                num.push_back(r % 10);
            }
        }

        if (carry != 0)
            num.push_back(carry);
        reverse(num.begin(), num.end());
        return num;
    }
};

/**
 * Helper function to print the vector result.
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

    // Test Case 1: num = [1,2,0,0], k = 34
    // 1200 + 34 = 1234
    vector<int> num1 = {1, 2, 0, 0};
    int k1 = 34;

    // Test Case 2: num = [2,1,5], k = 806
    // 215 + 806 = 1021
    vector<int> num2 = {2, 1, 5};
    int k2 = 806;

    vector<int> res1 = sol.addToArrayForm(num1, k1);
    cout << "Result 1: "; printVector(res1);

    vector<int> res2 = sol.addToArrayForm(num2, k2);
    cout << "Result 2: "; printVector(res2);

    return 0;
}