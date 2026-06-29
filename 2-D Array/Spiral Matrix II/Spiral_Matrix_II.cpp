#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> mat(n,vector<int>(n));
        int num = 1;
        int sr = 0 , sc = 0 , er = n - 1 , ec = n - 1;

        while(sr <= er && sc <= ec){
            //top
            for(int i = sc ; i <= ec ; i++){
                mat[sr][i] = num;
                num++;
            }
            sr++;

            //right
            for(int i = sr ; i <= er ; i++){
                mat[i][ec] = num;
                num++;
            }
            ec--;

            //bottom
            for(int i = ec ; i >= sc ; i--){
                mat[er][i] = num;
                num++;
            }
            er--;

            //left
            for(int i = er ; i >= sr ; i--){
                mat[i][sc] = num;
                num++;
            }
            sc++;
        }

        return mat;
    }
};

/**
 * Helper function to print the 2D matrix.
 */
void printMatrix(const vector<vector<int>>& matrix) {
    for (const auto& row : matrix) {
        cout << "[ ";
        for (int val : row) cout << val << (val < 10 ? "  " : " ");
        cout << "]\n";
    }
}

int main() {
    Solution sol;
    int n = 3;
    
    // Expected Output:
    // [ 1  2  3 ]
    // [ 8  9  4 ]
    // [ 7  6  5 ]
    vector<vector<int>> result = sol.generateMatrix(n);
    
    cout << "Generated 3x3 Spiral Matrix:\n";
    printMatrix(result);
    
    return 0;
}