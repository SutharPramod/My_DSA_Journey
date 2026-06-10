#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        int rows = matrix.size();
        int cols = matrix[0].size();

        if (rows == cols) {
            for (int i = 0; i < rows; i++) {
                for (int j = 0; j < i; j++) {
                    int t = matrix[i][j];
                    matrix[i][j] = matrix[j][i];
                    matrix[j][i] = t;
                }
            }
            return matrix;
        }

        else {
            vector<vector<int>> ans(cols, vector<int>(rows));
            for (int i = 0; i < rows; i++) {
                for (int j = 0; j < cols; j++) {
                    ans[j][i] = matrix[i][j];
                }
            }
            return ans;
        }
    }
};

/**
 * Helper function to print a 2D matrix.
 */
void printMatrix(const vector<vector<int>>& matrix) {
    for (const auto& row : matrix) {
        cout << "[ ";
        for (int val : row) {
            cout << val << " ";
        }
        cout << "]\n";
    }
}

int main() {
    Solution sol;

    // Test Case 1: Non-square Matrix (3x2)
    // [ 1 2 ]
    // [ 3 4 ]
    // [ 5 6 ]
    vector<vector<int>> matrix1 = {
        {1, 2},
        {3, 4},
        {5, 6}
    };
    // Expected Output (2x3):
    // [ 1 3 5 ]
    // [ 2 4 6 ]

    // Test Case 2: Square Matrix (3x3)
    vector<vector<int>> matrix2 = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    cout << "Original Matrix 1:\n"; printMatrix(matrix1);
    vector<vector<int>> res1 = sol.transpose(matrix1);
    cout << "Transposed Matrix 1:\n"; printMatrix(res1);

    cout << "\nOriginal Matrix 2:\n"; printMatrix(matrix2);
    vector<vector<int>> res2 = sol.transpose(matrix2);
    cout << "Transposed Matrix 2:\n"; printMatrix(res2);

    return 0;
}