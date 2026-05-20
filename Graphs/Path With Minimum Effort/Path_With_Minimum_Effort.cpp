#include <iostream>
#include <vector>
#include <queue>
#include <cmath>
#include <algorithm>
#include <climits>

using namespace std;

class Solution
{
public:
    bool valid(int r, int c, int n, int m)
    {
        if (r < 0 || c < 0 || r >= n || c >= m)
            return false;
        return true;
    }
    int minimumEffortPath(vector<vector<int>> &heights)
    {
        int n = heights.size();
        int m = heights[0].size();
        vector<vector<int>> res(n, vector<int>(m, INT_MAX));
        priority_queue<pair<int, pair<int, int>>, vector<pair<int, pair<int, int>>>, greater<pair<int, pair<int, int>>>> pq;

        int x[4] = {1, -1, 0, 0};
        int y[4] = {0, 0, -1, 1};

        res[0][0] = 0;

        pq.push({0, {0, 0}});

        while (pq.size() > 0)
        {
            auto t = pq.top();
            pq.pop();
            int dis = t.first;
            int r = t.second.first;
            int c = t.second.second;

            if (dis > res[r][c])
                continue;

            for (int i = 0; i < 4; i++)
            {
                int row = r + x[i];
                int col = c + y[i];

                if (!valid(row, col, n, m))
                    continue;

                int absdiff = abs(heights[r][c] - heights[row][col]);

                int newwt = max(absdiff, dis);

                if (newwt < res[row][col])
                {
                    res[row][col] = newwt;
                    pq.push({newwt, {row, col}});
                }
            }
        }

        return res[n - 1][m - 1];
    }
};

int main()
{
    Solution sol;

    // Test Case 1: Simple grid
    // 1 2 2
    // 3 8 2
    // 5 3 5
    // Path: 1->3->5->3->5 (effort 2) or 1->2->2->2->5 (effort 3)
    vector<vector<int>> heights1 = {
        {1, 2, 2},
        {3, 8, 2},
        {5, 3, 5}};

    // Test Case 2: Uniform heights
    vector<vector<int>> heights2 = {
        {1, 2, 3},
        {3, 8, 4},
        {5, 3, 5}};

    cout << "Test Case 1: " << sol.minimumEffortPath(heights1) << " (Expected: 2)" << endl;
    cout << "Test Case 2: " << sol.minimumEffortPath(heights2) << " (Expected: 1)" << endl;

    return 0;
}