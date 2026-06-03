#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
  public:
    int fun(int  i , int  n , int W, vector<int> &val, vector<int> &wt,vector<vector<int>> &dp){
        if(i == n || W == 0) return 0;
        
        if(wt[i] > W) return dp[i][W] = fun(i+1 , n , W , val , wt , dp);
        
        if(dp[i][W] != -1) return dp[i][W];
        
        int yes = val[i] + fun(i+1 , n , W - wt[i] , val , wt ,dp);
        int no = fun(i+1 , n , W , val , wt,dp);
        
        return dp[i][W] = max(yes,no);
    }
    int knapsack(int W, vector<int> &val, vector<int> &wt) {
        int n = val.size();
        vector<vector<int>> dp(n + 1,vector<int>(W + 1,-1));
        return fun( 0 , n , W , val , wt ,dp);
    }
};

int main() {
    Solution sol;
    
    int W = 50;
    vector<int> values = {60, 100, 120};
    vector<int> weights = {10, 20, 30};

    cout << "Max Value: " << sol.knapsack(W, values, weights) << endl; 
    // Expected: 220 (Items with weights 20 and 30)

    return 0;
}