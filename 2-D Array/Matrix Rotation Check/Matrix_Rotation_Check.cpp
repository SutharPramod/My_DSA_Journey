#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    bool findRotation(vector<vector<int>>& mat, vector<vector<int>>& target) {
        int n = mat.size();
        bool ans0 = true , ans90 = true , ans180 = true , ans270 = true;
        for(int i = 0 ; i < n ; i++){
            for(int j = 0; j < n ; j++){
                if(mat[i][j] != target[i][j]) ans0 = false;
                if(mat[i][j] != target[j][n-i-1]) ans90 = false;
                if(mat[i][j] != target[n-i-1][n-j-1]) ans180 = false;
                if(mat[i][j] != target[n-j-1][i]) ans270 = false;

                if(!ans0 && !ans90 && !ans180 && !ans270) return false;
            }
        }

        return ans0 || ans90 || ans180 || ans270;
    }
};

int main() {
    Solution sol;

    // Test Case: 2x2 Matrix
    // mat:              target:
    // [ 0  1 ]          [ 1  0 ]
    // [ 1  0 ]          [ 0  1 ]
    // Rotating mat 90 degrees once matches the target.
    vector<vector<int>> mat = {{0, 1}, {1, 0}};
    vector<vector<int>> target = {{1, 0}, {0, 1}};

    cout << "Can obtain target? " << (sol.findRotation(mat, target) ? "True" : "False") 
         << " (Expected: True)" << endl;

    return 0;
}