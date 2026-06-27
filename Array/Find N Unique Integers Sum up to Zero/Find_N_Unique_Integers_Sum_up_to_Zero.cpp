#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> sumZero(int n) {
        vector<int> res;
        for (int i = n / 2; i >= 1; i--) {
            res.push_back(i);
            res.push_back((-1)*i);
        }
        if(n%2 != 0) res.push_back(0);
        return res;
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

    // Test Case 1: n = 5 (Odd)
    // Symmetrical pairs: {1, -1, 2, -2} + {0} -> [1, -1, 2, -2, 0]
    int n1 = 5;
    vector<int> res1 = sol.sumZero(n1);
    cout << "n = 5: "; printVector(res1);

    // Test Case 2: n = 4 (Even)
    // Symmetrical pairs: {1, -1, 2, -2} -> [1, -1, 2, -2]
    int n2 = 4;
    vector<int> res2 = sol.sumZero(n2);
    cout << "n = 4: "; printVector(res2);

    return 0;
}