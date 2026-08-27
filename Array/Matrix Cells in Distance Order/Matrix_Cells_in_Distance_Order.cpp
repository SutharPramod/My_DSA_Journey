#include <iostream>
#include <vector>
#include <queue>
#include <cmath>

using namespace std;

class Solution {
public:
    vector<vector<int>> allCellsDistOrder(int rows, int cols, int rCenter, int cCenter) {
        vector<vector<bool>> vis(rows , vector<bool>(cols,false));

        queue<pair<int,int>> q;

        q.push({rCenter , cCenter});
        vis[rCenter][cCenter] = true;

        int x[] = {-1, 1 , 0 , 0};
        int y[] = {0 , 0, -1, 1};

        vector<vector<int>> ans;
        while(q.size() > 0){
            int r = q.front().first;
            int c = q.front().second;
            q.pop();

            ans.push_back({r , c});
            int nr , nc;
            for(int i = 0 ; i < 4 ; i++){
                nr = r + x[i];
                nc = c + y[i];

                if(nr >= 0 && nc >= 0 && nr < rows && nc < cols && !vis[nr][nc]){
                    vis[nr][nc] = true;
                    q.push({nr,nc});
                }
            }
        }

        return ans;
    }
};

int main() {
    Solution sol;

    // Test Case 1: 1x2 matrix, center (0, 0)
    auto res1 = sol.allCellsDistOrder(1, 2, 0, 0);
    cout << "Test Case 1 Output: ";
    for (auto& cell : res1) cout << "[" << cell[0] << "," << cell[1] << "] ";
    cout << "\n(Expected: [0,0] [0,1])" << endl;

    // Test Case 2: 2x2 matrix, center (0, 1)
    auto res2 = sol.allCellsDistOrder(2, 2, 0, 1);
    cout << "Test Case 2 Output: ";
    for (auto& cell : res2) cout << "[" << cell[0] << "," << cell[1] << "] ";
    cout << "\n(Expected distances 0, 1, 1, 2)" << endl;

    return 0;
}