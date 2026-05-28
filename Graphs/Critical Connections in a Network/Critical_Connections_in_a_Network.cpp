#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
int time = 0;
vector<int> dt , low;
    void dfs(int u , int par , vector<vector<int>> &adj , vector<vector<int>> &ans){
        dt[u] = low[u] = ++time;

        for(int v : adj[u]){
            if(dt[v] == -1){
                dfs(v , u , adj , ans);
                low[u] = min(low[u],low[v]);

                if(low[v] > dt[u]){
                    ans.push_back({u , v});
                }
            }
            else if(v != par){
                low[u] = min(low[u] , dt[v]);
            }
        }
    }
    vector<vector<int>> criticalConnections(int n, vector<vector<int>>& connections) {
        vector<vector<int>> adj(n);
        vector<vector<int>> ans;

        for(int i = 0 ; i < connections.size() ; i++){
            int u = connections[i][0];
            int v = connections[i][1];
            adj[u].push_back(v);
            adj[v].push_back(u);
        }

        dt.resize(n,-1);
        low.resize(n);

        for(int i = 0 ; i < n ; i++){
            if(dt[i] == -1){
                dfs(i, -1 , adj , ans);
            }
        }
        return ans;
    }
};

int main() {
    Solution sol;
    vector<vector<int>> conn = {{0,1}, {1,2}, {2,0}, {1,3}};
    int n = 4;
    
    // Test Case: Triangle (0-1-2) with a tail (1-3)
    // Only {1,3} is critical.
    auto result = sol.criticalConnections(n, conn);
    
    cout << "Critical Connections:\n";
    for (auto& bridge : result) {
        cout << "[" << bridge[0] << ", " << bridge[1] << "]\n";
    }
    
    return 0;
}