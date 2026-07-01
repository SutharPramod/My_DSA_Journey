#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int n = grid.size();
        int r = 0 , c = grid[0].size() - 1,cnt = 0;
        while(r < n && c >= 0){
            if(grid[r][c] < 0){
                cnt+=(n - r);
                c--;
            }
            else
                r++;
        }
        return cnt;
    }
};

int main() {
    Solution sol;

    // Test Case Matrix (Sorted descending across rows and columns)
    // [  4,  3,  2, -1 ]
    // [  3,  2,  1, -1 ]
    // [  1,  1, -1, -2 ]
    // [ -1, -1, -2, -3 ]
    vector<vector<int>> grid = {
        {4, 3, 2, -1},
        {3, 2, 1, -1},
        {1, 1, -1, -2},
        {-1, -1, -2, -3}
    };

    cout << "Total negative numbers: " << sol.countNegatives(grid) << " (Expected: 8)" << endl;

    return 0;
}