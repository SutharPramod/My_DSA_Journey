#include <iostream>
#include <vector>
#include <queue>

using namespace std;

class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        if (grid.empty()) return 0;
        queue<pair<pair<int,int>,int>> q;
        int maxtime = 0;
        bool flag = false;

        for(int i = 0 ; i < grid.size(); i++){
            for(int j = 0 ; j < grid[0].size(); j++){
                if(grid[i][j] == 2){
                    q.push({{i,j},0});
                }
                if(grid[i][j] == 1){
                    flag = true;
                }
            }
        }

        if(!flag) return 0;

        while(q.size() > 0){
            int i = q.front().first.first;
            int j = q.front().first.second;
            int time = q.front().second;
            q.pop();

            maxtime = max(maxtime,time);

            if(i - 1 >= 0 && grid[i-1][j] == 1){
                grid[i-1][j] = 2;
                q.push({{i-1,j},time+1});
            }
            if(j - 1 >= 0 && grid[i][j-1] == 1){
                grid[i][j-1] = 2;
                q.push({{i,j-1},time+1});
            }
            if(i + 1 < grid.size() && grid[i+1][j] == 1){
                grid[i+1][j] = 2;
                q.push({{i+1,j},time+1});
            }
            if(j + 1 < grid[0].size() && grid[i][j+1] == 1){
                grid[i][j+1] = 2;
                q.push({{i,j+1},time+1});
            }

        }

        for(int i = 0 ; i < grid.size(); i++){
            for(int j = 0 ; j < grid[0].size(); j++){
                if(grid[i][j] == 1){
                    return -1;
                }
            }
        }

        return maxtime;
    }
};

int main() {
    Solution sol;

    // Test Case: Standard scenario where all oranges rot
    // 2 1 1
    // 1 1 0
    // 0 1 1
    vector<vector<int>> grid1 = {
        {2, 1, 1},
        {1, 1, 0},
        {0, 1, 1}
    };

    // Test Case: Impossible scenario (fresh orange isolated)
    // 2 1 0
    // 0 0 0
    // 1 0 1
    vector<vector<int>> grid2 = {
        {2, 1, 0},
        {0, 0, 0},
        {1, 0, 1}
    };

    cout << "Test Case 1: " << sol.orangesRotting(grid1) << " minutes (Expected: 4)" << endl;
    cout << "Test Case 2: " << sol.orangesRotting(grid2) << " minutes (Expected: -1)" << endl;

    return 0;
}