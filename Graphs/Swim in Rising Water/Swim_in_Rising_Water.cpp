#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
#include <climits>

using namespace std;

class Solution {
public:
    bool valid(int r, int c, int n, int m) {
        if (r < 0 || c < 0 || r >= n || c >= m)
            return false;
        return true;
    }
    int swimInWater(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();

        vector<vector<int>> res(n, vector<int>(m, INT_MAX));
        priority_queue<pair<int, pair<int, int>>,
                       vector<pair<int, pair<int, int>>>,
                       greater<pair<int, pair<int, int>>>>
            pq;

        pq.push({grid[0][0], {0, 0}});
        res[0][0] = grid[0][0];

        while (pq.size() > 0) {
            auto t = pq.top();
            pq.pop();
            int dis = t.first;
            int row = t.second.first;
            int col = t.second.second;

            int x[4] = {-1, 1, 0, 0};
            int y[4] = {0, 0, -1, 1};

            if(row == n - 1 && col == m - 1) return dis;
            if(dis > res[row][col]) continue;

            for (int i = 0; i < 4; i++) {
                int r = row + x[i];
                int c = col + y[i];

                if (!valid(r, c, n, m))
                    continue;

                int newwt = max(dis, grid[r][c]);

                if (newwt < res[r][c]) {
                    res[r][c] = newwt;
                    pq.push({newwt, {r, c}});
                }
            }
        }

        return res[n-1][m-1];
    }
};

int main() {
    Solution sol;

    // Test Case 1: 2x2 Grid
    // 0 2
    // 1 3
    // Path: 0->1->3 (Time 3)
    vector<vector<int>> grid1 = {
        {0, 2},
        {1, 3}
    };

    // Test Case 2: 5x5 Grid
    vector<vector<int>> grid2 = {
        {0,  1,  2,  3,  4},
        {24, 23, 22, 21, 5},
        {12, 13, 14, 15, 16},
        {11, 17, 18, 19, 20},
        {10, 9,  8,  7,  6}
    };

    cout << "Test Case 1: " << sol.swimInWater(grid1) << " (Expected: 3)" << endl;
    cout << "Test Case 2: " << sol.swimInWater(grid2) << " (Expected: 16)" << endl;

    return 0;
}