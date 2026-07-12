#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        int row = mat.size();
        int col = mat[0].size();

        if(row == r && col == c) return mat;
        if(row*col != r*c) return mat;

        vector<vector<int>> ans(r,vector<int>(c));
        for(int i = 0 ; i < row * col ; i++){
            ans[i/c][i%c] = mat[i/col][i%col];
        }

        return ans;
    }
};

/**
 * Helper function to print a 2D matrix.
 */
void printMatrix(const vector<vector<int>>& matrix) {
    for (const auto& row : matrix) {
        cout << "[ ";
        for (int val : row) cout << val << " ";
        cout << "]\n";
    }
}

int main() {
    Solution sol;

    // Test Case 1: Valid reshape from 2x2 to 1x4
    vector<vector<int>> mat1 = {{1, 2}, {3, 4}};
    int r1 = 1, c1 = 4;
    // Expected: [[1, 2, 3, 4]]

    // Test Case 2: Invalid reshape from 2x2 to 2x4
    vector<vector<int>> mat2 = {{1, 2}, {3, 4}};
    int r2 = 2, c2 = 4;
    // Expected: Original matrix [[1, 2], [3, 4]]

    cout << "Test Case 1:\n";
    auto res1 = sol.matrixReshape(mat1, r1, c1);
    printMatrix(res1);

    cout << "\nTest Case 2:\n";
    auto res2 = sol.matrixReshape(mat2, r2, c2);
    printMatrix(res2);

    return 0;
}