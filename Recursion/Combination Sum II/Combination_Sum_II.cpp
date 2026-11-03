#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
private:
    void backtrack(vector<int>& candidates, int target, int start, vector<int>& current, vector<vector<int>>& result) {
        if (target == 0) {
            result.push_back(current);
            return;
        }
        
        for (int i = start; i < candidates.size(); ++i) {
            // Skip duplicates at the same recursion depth
            if (i > start && candidates[i] == candidates[i - 1]) {
                continue;
            }
            
            // If the current candidate exceeds the remaining target, stop the loop
            if (candidates[i] > target) {
                break;
            }
            
            current.push_back(candidates[i]);
            backtrack(candidates, target - candidates[i], i + 1, current, result);
            current.pop_back();
        }
    }

public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int>> result;
        vector<int> current;
        // Sort the candidates to easily skip duplicates and handle early stopping
        sort(candidates.begin(), candidates.end());
        backtrack(candidates, target, 0, current, result);
        return result;
    }
};

int main() {
    Solution solution;
    
    // Test Case 1
    vector<int> candidates1 = {10, 1, 2, 7, 6, 1, 5};
    int target1 = 8;
    vector<vector<int>> result1 = solution.combinationSum2(candidates1, target1);
    
    cout << "Test Case 1 Results:" << endl;
    for (const auto& comb : result1) {
        cout << "[ ";
        for (int num : comb) {
            cout << num << " ";
        }
        cout << "]" << endl;
    }
    
    // Test Case 2
    vector<int> candidates2 = {2, 5, 2, 1, 2};
    int target2 = 5;
    vector<vector<int>> result2 = solution.combinationSum2(candidates2, target2);
    
    cout << "\nTest Case 2 Results:" << endl;
    for (const auto& comb : result2) {
        cout << "[ ";
        for (int num : comb) {
            cout << num << " ";
        }
        cout << "]" << endl;
    }
    
    return 0;
}