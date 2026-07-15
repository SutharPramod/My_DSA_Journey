#include <iostream>
#include <vector>
#include <deque>
#include <climits>
#include <algorithm>

using namespace std;

class Solution {
public:
    int findMaxValueOfEquation(vector<vector<int>>& points, int k) {
        int n = points.size();
        int maxv = INT_MIN;
        int r = 1;
        for (int i = 0; i < n - 1; i++) {
            int xi = points[i][0], yi = points[i][1];
            if(r <= i) r = i + 1;
            for (int j = r; j < n; j++) {
                    int xj = points[j][0], yj = points[j][1];
                    if(xj - xi > k) break;
                    int currv = yi+yj+xj-xi;
                    if(maxv < currv){
                        maxv = currv;
                        r = j;
                    }
            }
        }
        return maxv;
    }
};

int main() {
    Solution sol;

    // Test Case: points = [[1,3],[2,0],[5,10],[6,-10]], k = 1
    // Pairs within distance k = 1: 
    // - [1,3] and [2,0] -> 3 + 0 + |1 - 2| = 4
    // - [5,10] and [6,-10] -> 10 + (-10) + |5 - 6| = 1
    // Expected Max Value: 4
    vector<vector<int>> points = {{1, 3}, {2, 0}, {5, 10}, {6, -10}};
    int k = 1;

    cout << "Max Value of Equation: " << sol.findMaxValueOfEquation(points, k) 
         << " (Expected: 4)" << endl;

    return 0;
}