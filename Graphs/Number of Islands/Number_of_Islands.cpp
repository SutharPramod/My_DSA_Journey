#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
        if (grid.empty()) return 0;
        int islands = 0;
        for (int i = 0; i < grid.size(); i++) {
            for (int j = 0; j < grid[0].size(); j++) {
                if (grid[i][j] == '1') {
                    islands++;
                    dfs(grid, i, j);
                }
            }
        }
        return islands;
    }

private:
    
    void dfs(vector<vector<char>>& grid, int i, int j) {
        if (i < 0 || j < 0 || i >= grid.size() || j >= grid[0].size() || grid[i][j] == '0')
            return;

        grid[i][j] = '0';

        // top
        dfs(grid, i - 1, j);
        // bottom
        dfs(grid, i + 1, j);
        // left
        dfs(grid, i, j - 1);
        // right
        dfs(grid, i, j + 1);
    }
};

int main() {
    Solution sol;

    // Test Case: A grid with 3 distinct islands
    vector<vector<char>> grid = {
        {'1', '1', '0', '0', '0'},
        {'1', '1', '0', '0', '0'},
        {'0', '0', '1', '0', '0'},
        {'0', '0', '0', '1', '1'}
    };

    /* Grid Visual:
       L L . . .
       L L . . .
       . . L . .
       . . . L L
    */

    int result = sol.numIslands(grid);

    cout << "Number of Islands: " << result << " (Expected: 3)" << endl;

    return 0;
}