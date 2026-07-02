#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int oddCells(int m, int n, vector<vector<int>>& indices) {
        vector<vector<int>> matrix(m,vector<int>(n,0));

        for(vector<int> &t : indices){
            int r = t[0];
            int c = t[1];

            for(int i = 0 ; i < m ; i++){
                matrix[i][c]++;
            }

            for(int j = 0 ; j < n ; j++){
                matrix[r][j]++;
            }
        }

        int cnt = 0;
        for(int i = 0 ; i < m ; i++){
            for(int j = 0 ; j < n ; j++){
                if(matrix[i][j] % 2 != 0) cnt++;
            }
        }

        return cnt;
    }
};

int main() {
    Solution sol;

    // Test Case 1: m = 2, n = 3, indices = [[0,1],[1,1]]
    // Row 0 inc once, Row 1 inc once.
    // Col 1 inc twice.
    vector<vector<int>> indices1 = {{0, 1}, {1, 1}};
    // Expected: 6
    
    cout << "Test Case 1: " << sol.oddCells(2, 3, indices1) << " (Expected: 6)" << endl;

    return 0;
}