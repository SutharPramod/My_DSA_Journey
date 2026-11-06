#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
private:
    void dfs(const vector<vector<int>>& graph, int curr, int target, vector<int>& currentPath, vector<vector<int>>& allPaths) {
        currentPath.push_back(curr);
        
        if (curr == target) {
            allPaths.push_back(currentPath);
        } else {
            for (int nextNode : graph[curr]) {
                dfs(graph, nextNode, target, currentPath, allPaths);
            }
        }
        
        currentPath.pop_back();
    }

public:
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        vector<vector<int>> allPaths;
        vector<int> currentPath;
        int target = graph.size() - 1;
        
        dfs(graph, 0, target, currentPath, allPaths);
        
        return allPaths;
    }
};

int main() {
    Solution solution;

    // Test Case 1
    vector<vector<int>> graph1 = {{1, 2}, {3}, {3}, {}};
    vector<vector<int>> result1 = solution.allPathsSourceTarget(graph1);
    
    cout << "Test Case 1 Output:" << endl;
    for (const auto& path : result1) {
        cout << "[ ";
        for (int node : path) {
            cout << node << " ";
        }
        cout << "]" << endl;
    }

    // Test Case 2
    vector<vector<int>> graph2 = {{4, 3, 1}, {3, 2, 4}, {3}, {4}, {}};
    vector<vector<int>> result2 = solution.allPathsSourceTarget(graph2);
    
    cout << "\nTest Case 2 Output:" << endl;
    for (const auto& path : result2) {
        cout << "[ ";
        for (int node : path) {
            cout << node << " ";
        }
        cout << "]" << endl;
    }

    return 0;
}