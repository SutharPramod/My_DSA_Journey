#include <iostream>
#include <vector>
#include <queue>
#include <cmath>

using namespace std;

class Solution {
public:
    int mh(vector<vector<int>>& points, int x, int y) {
        return abs(points[x][0] - points[y][0]) +
               abs(points[x][1] - points[y][1]);
    }
    int minCostConnectPoints(vector<vector<int>>& points) {
        int n = points.size();
        int mst = 0;
        vector<bool> vis(n, false);

        priority_queue<pair<int, int>, vector<pair<int, int>>,
                       greater<pair<int, int>>>
            pq;

        pq.push({0, 0});
    int cnt = 0;
        while (pq.size() > 0 && cnt < n ) {
            int wt = pq.top().first;
            int node = pq.top().second;
            pq.pop();

            if (vis[node])
                continue;
            vis[node] = true;
            mst += wt;
            cnt++;

            for (int i = 0; i < n; i++) {
                if (!vis[i]) {
                    int dist = mh(points, node, i);
                    pq.push({dist, i});
                }
            }
        }
        return mst;
    }
};

int main() {
    Solution sol;

    // Test Case 1
    // Points: [[0,0],[2,2],[3,10],[5,2],[7,0]]
    vector<vector<int>> p1 = {{0,0},{2,2},{3,10},{5,2},{7,0}};
    // Expected Output: 20

    // Test Case 2
    vector<vector<int>> p2 = {{3,12},{-2,5},{-4,1}};
    // Expected Output: 18

    cout << "Test Case 1: " << sol.minCostConnectPoints(p1) << " (Expected: 20)" << endl;
    cout << "Test Case 2: " << sol.minCostConnectPoints(p2) << " (Expected: 18)" << endl;

    return 0;
}