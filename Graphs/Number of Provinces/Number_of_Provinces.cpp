#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    void dfs(int i , vector<vector<int>>& isConnected , vector<bool> &vis , int n){
        vis[i] = true;

        for(int j = 0 ; j < n ; j++){
            if(isConnected[i][j] == 1 && !vis[j]){
                dfs(j , isConnected , vis , n);
            }
        }
    }
    int findCircleNum(vector<vector<int>>& isConnected) {
        int n = isConnected.size();
        vector<bool> vis(n , false);
        int ans = 0;
        for(int i = 0 ; i < n ; i++){
            if(!vis[i]){
                dfs(i , isConnected , vis , n);
                ans++;
            }
        }
        return ans;
    }
};

int main() {
    Solution sol;

    // Test Case 1: Two provinces
    // City 0-1 connected, City 2 isolated
    vector<vector<int>> matrix1 = {
        {1, 1, 0},
        {1, 1, 0},
        {0, 0, 1}
    };
    // Expected: 2

    // Test Case 2: Three provinces
    // All cities isolated
    vector<vector<int>> matrix2 = {
        {1, 0, 0},
        {0, 1, 0},
        {0, 0, 1}
    };
    // Expected: 3

    cout << "Test Case 1: " << sol.findCircleNum(matrix1) << " (Expected: 2)" << endl;
    cout << "Test Case 2: " << sol.findCircleNum(matrix2) << " (Expected: 3)" << endl;

    return 0;
}