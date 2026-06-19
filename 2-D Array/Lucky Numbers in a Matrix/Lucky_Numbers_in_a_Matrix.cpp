#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

class Solution {
public:
    vector<int> luckyNumbers (vector<vector<int>>& matrix) {
        int r = matrix.size();
        int c = matrix[0].size();
        
        vector<int> rowMin(r, INT_MAX);
        vector<int> colMax(c, INT_MIN);
        
        for (int i = 0; i < r; ++i) {
            for (int j = 0; j < c; ++j) {
                rowMin[i] = min(rowMin[i], matrix[i][j]);
                colMax[j] = max(colMax[j], matrix[i][j]);
            }
        }
        
        vector<int> result;
        for (int i = 0; i < r; ++i) {
            for (int j = 0; j < c; ++j) {
                if (matrix[i][j] == rowMin[i] && matrix[i][j] == colMax[j]) {
                    result.push_back(matrix[i][j]);
                }
            }
        }
        
        return result;
    }
};

int main() {
    Solution sol;
    
    // Valid Test Case: 15 is the minimum in row 2 and maximum in column 0
    vector<vector<int>> validMat = { 
        {3, 7, 8}, 
        {9, 11, 13}, 
        {15, 16, 17} 
    };
    
    auto res = sol.luckyNumbers(validMat);
    
    cout << "Lucky Numbers: ";
    for (int val : res) {
        cout << val << " ";
    }
    cout << endl; // Output will be: 15

    return 0;
}
