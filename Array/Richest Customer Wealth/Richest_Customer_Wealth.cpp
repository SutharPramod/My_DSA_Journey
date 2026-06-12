#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>

using namespace std;

class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int m = 0;
        for(int i = 0; i < accounts.size() ; i++){
            int curr = 0;
            for(int j = 0 ; j < accounts[i].size() ; j++){
                curr += accounts[i][j];
            }
            m = max(m , curr);
        }
        return m;
    }
};

int main() {
    Solution sol;

    // Test Case 1: 3 customers, 2 banks each
    // Customer 1: 1 + 2 = 3
    // Customer 2: 3 + 2 = 5
    // Customer 3: 2 + 1 = 3
    vector<vector<int>> accounts1 = {
        {1, 2},
        {3, 2},
        {2, 1}
    };

    // Test Case 2: 2 customers, 3 banks each
    // Customer 1: 1 + 5 = 6
    // Customer 2: 7 + 3 = 10
    // Customer 3: 3 + 5 = 8
    vector<vector<int>> accounts2 = {
        {1, 5},
        {7, 3},
        {3, 5}
    };

    cout << "Test Case 1: " << sol.maximumWealth(accounts1) << " (Expected: 5)" << endl;
    cout << "Test Case 2: " << sol.maximumWealth(accounts2) << " (Expected: 10)" << endl;

    return 0;
}