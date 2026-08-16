#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    vector<int> findPeakGrid(vector<vector<int>>& mat) {
        int rows = mat.size() , cols = mat[0].size();

        int st = 0 , e = rows - 1;

        while(st <= e){
            int mid = st + (e - st)/2;
            int mcol = 0;
            for(int i = 1 ; i < cols ; i++){
                if(mat[mid][mcol] < mat[mid][i]){
                    mcol = i;
                }
            }

            int top = (mid - 1 >= 0)? mat[mid - 1][mcol] : -1;
            int bottom = (mid + 1 < rows) ? mat[mid + 1][mcol] : -1;

            if(mat[mid][mcol] > top && mat[mid][mcol] > bottom) return {mid , mcol};
            else if(top > mat[mid][mcol]) e = mid - 1;
            else st = mid + 1;
        }
        return {-1,-1};
    }
};

int main() {
    Solution sol;

    // Test Case 1
    vector<vector<int>> mat1 = {
        {10, 20, 15},
        {21, 30, 14},
        {7,  16, 32}
    };
    vector<int> peak1 = sol.findPeakGrid(mat1);
    cout << "Test Case 1 Peak: [" << peak1[0] << ", " << peak1[1] << "] (Value: " << mat1[peak1[0]][peak1[1]] << ")" << endl;

    // Test Case 2
    vector<vector<int>> mat2 = {
        {1, 4},
        {3, 2}
    };
    vector<int> peak2 = sol.findPeakGrid(mat2);
    cout << "Test Case 2 Peak: [" << peak2[0] << ", " << peak2[1] << "] (Value: " << mat2[peak2[0]][peak2[1]] << ")" << endl;

    return 0;
}