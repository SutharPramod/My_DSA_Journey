#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
private:
    void backtrack(int k, int n, int start, vector<int>& current, vector<vector<int>>& result) {
        if (current.size() == k && n == 0) {
            result.push_back(current);
            return;
        }
        if (current.size() > k || n < 0) {
            return;
        }
        
        for (int i = start; i <= 9; ++i) {
            current.push_back(i);
            backtrack(k, n - i, i + 1, current, result);
            current.pop_back();
        }
    }

public:
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>> result;
        vector<int> current;
        backtrack(k, n, 1, current, result);
        return result;
    }
};

int main() {
    Solution sol;
    
    // Test Case 1
    int k1 = 3, n1 = 7;
    vector<vector<int>> result1 = sol.combinationSum3(k1, n1);
    cout << "Test Case 1 (k = 3, n = 7):\n";
    for (const auto& vec : result1) {
        cout << "[ ";
        for (int num : vec) {
            cout << num << " ";
        }
        cout << "]\n";
    }
    
    // Test Case 2
    int k2 = 3, n2 = 9;
    vector<vector<int>> result2 = sol.combinationSum3(k2, n2);
    cout << "\nTest Case 2 (k = 3, n = 9):\n";
    for (const auto& vec : result2) {
        cout << "[ ";
        for (int num : vec) {
            cout << num << " ";
        }
        cout << "]\n";
    }
    
    return 0;
}