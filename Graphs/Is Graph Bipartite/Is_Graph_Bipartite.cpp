#include <iostream>
#include <vector>
#include <queue>

using namespace std;

class Solution {
public:
    bool dfs(int src,vector<vector<int>>& graph,int color,vector<int> &colors){
        colors[src] = color;

        for(auto neigh : graph[src]){
            if(colors[neigh] == -1){
                if(!dfs(neigh , graph , 1 - color , colors)) return false;
            }
            else if(colors[neigh] != -1 && colors[neigh] == color){
                return false;
            }
        }
        return true;
    }
    bool isBipartite(vector<vector<int>>& graph) {
        vector<int> colors(graph.size(),-1);

        for(int i = 0 ; i < graph.size(); i++){
            if(colors[i] == -1){
                if(!dfs(i,graph,0,colors)) return false;
            }
        }
        return true;
    }
};

int main() {
    Solution sol;

    // Test Case 1: Bipartite (Square/Cycle of 4)
    // 0-1, 1-2, 2-3, 3-0
    vector<vector<int>> graph1 = {{1, 3}, {0, 2}, {1, 3}, {0, 2}};

    // Test Case 2: Not Bipartite (Triangle/Cycle of 3)
    // 0-1, 1-2, 2-0
    vector<vector<int>> graph2 = {{1, 2}, {0, 2}, {0, 1}};

    cout << "Test Case 1: " << (sol.isBipartite(graph1) ? "Bipartite" : "Not Bipartite") 
         << " (Expected: Bipartite)" << endl;

    cout << "Test Case 2: " << (sol.isBipartite(graph2) ? "Bipartite" : "Not Bipartite") 
         << " (Expected: Not Bipartite)" << endl;

    return 0;
}