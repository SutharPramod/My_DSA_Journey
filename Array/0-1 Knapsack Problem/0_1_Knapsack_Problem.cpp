#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
  public:
    int knapsack(int W, vector<int> &val, vector<int> &wt) {
        int n = val.size();
        
        vector<int> dp(W + 1 , 0);

        for(int i = 0 ; i < n ; i++){
            for(int w = W ; w >= wt[i] ; w--){
                dp[w] = max(dp[w] , val[i] + dp[w - wt[i]]);
            }
        }
        return dp[W];
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