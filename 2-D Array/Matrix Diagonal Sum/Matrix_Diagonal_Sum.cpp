#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int sum = 0;
        int n = mat.size();
        for(int i = 0 ; i < n ; i++){
            sum += mat[i][i];
            sum += mat[i][n-1-i];
        }

        if(n%2!=0){
            sum-=mat[n/2][n/2];
        }
        return sum;
    }
};

int main() {
    Solution sol;

    // Test Case 1: 3x3 Matrix (Odd dimension)
    // [ 1 2 3 ]
    // [ 4 5 6 ]
    // [ 7 8 9 ]
    // Primary: 1+5+9=15 | Secondary: 3+5+7=15
    // Center (5) is shared. Total = 15 + 15 - 5 = 25
    vector<vector<int>> mat1 = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    // Test Case 2: 2x2 Matrix (Even dimension)
    // [ 1 1 ]
    // [ 1 1 ]
    // Total = 1+1+1+1 = 4
    vector<vector<int>> mat2 = {{1, 1}, {1, 1}};

    cout << "Test Case 1: " << sol.diagonalSum(mat1) << " (Expected: 25)" << endl;
    cout << "Test Case 2: " << sol.diagonalSum(mat2) << " (Expected: 4)" << endl;

    return 0;
}