#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int n = cost.size();
        if(n == 1) return cost[0];
        if(n == 2) return min(cost[0],cost[1]);
        int pp = cost[n-1];
        int p = cost[n-2];
        for(int i = n - 3 ; i >= 0 ; i--){
            int ans = min(p + cost[i] , pp + cost[i]);
            pp = p;
            p = ans;
        }
        return min(p,pp);
    }
};

int main() {
    Solution sol;

    // Test Case 1
    vector<int> cost1 = {10, 15, 20};
    // Expected: 15 (Start at index 1, pay 15, jump 2 steps to the top)
    cout << "Test Case 1: " << sol.minCostClimbingStairs(cost1) << " (Expected: 15)" << endl;

    // Test Case 2
    vector<int> cost2 = {1, 100, 1, 1, 1, 100, 1, 1, 100, 1};
    // Expected: 6 (Step on 1s, avoiding all 100s)
    cout << "Test Case 2: " << sol.minCostClimbingStairs(cost2) << " (Expected: 6)" << endl;

    return 0;
}