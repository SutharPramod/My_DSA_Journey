#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int r = matrix.size();
        int c = matrix[0].size();

        if(r == 1 && c == 1) return;
        if(r == 1){
            bool z = false;
            for(int i = 0 ; i < c; i++){
                if(matrix[0][i] == 0) z = true;
            }
            if(z){
                for(int i = 0 ; i < c ; i++){
                    matrix[0][i] = 0;
                }
                return;
            }
            return;
        }
        if(c == 1){
            bool z = false;
            for(int i = 0 ; i < r; i++){
                if(matrix[i][0] == 0) z = true;
            }
            if(z){
                for(int i = 0 ; i < r ; i++){
                    matrix[i][0] = 0;
                }
                return;
            }
            return;
        }

        bool rz = false;
        for(int i = 0 ; i < r; i++){
            for(int j = 0 ; j < c ; j++){
                if(matrix[i][j] == 0){
                    matrix[0][j] = 0;
                    if(i > 0){
                        matrix[i][0] = 0;
                    }
                    else{
                        rz = true;
                    }
                }
            }
        }

        for(int i = 1 ; i < r ; i++){
            for(int j = 1 ; j < c ; j++){
                if(matrix[i][0] == 0 || matrix[0][j] == 0){
                    matrix[i][j] = 0;
                }
            }
        }

        if(matrix[0][0] == 0){
            for(int i = 0 ; i < r ; i++){
            matrix[i][0] = 0;
        }
        }

        if(rz){
            for(int i = 0 ; i < c ; i++){
                matrix[0][i] = 0;
            }
        }
    }
};

/**
 * Helper function to print a matrix.
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

    // Test Case: 3x3 Matrix with a zero in the center
    // [ 1 1 1 ]          [ 1 0 1 ]
    // [ 1 0 1 ]   ==>    [ 0 0 0 ]
    // [ 1 1 1 ]          [ 1 0 1 ]
    vector<vector<int>> mat = {{1, 1, 1}, {1, 0, 1}, {1, 1, 1}};

    cout << "Original Matrix:\n";
    printMatrix(mat);

    sol.setZeroes(mat);

    cout << "\nModified Matrix:\n";
    printMatrix(mat);

    return 0;
}