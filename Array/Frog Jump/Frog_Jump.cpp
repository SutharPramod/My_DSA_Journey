#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;

class Solution {
  public:
    int minCost(vector<int>& height) {
        int n = height.size();
        if(n == 1) return 0;
        
        int pp = 0;
        int p = abs(height[n-1] - height[n-2]);
        for(int i = n - 3 ; i >= 0 ; i--){
            int ans = min(p + abs(height[i] - height[i + 1]) , pp + abs(height[i] - height[i + 2]));
            pp = p;
            p = ans;
        }
        return p;
    }
};

int main() {
    Solution sol;

    // Test Case 1
    vector<int> heights1 = {20, 30, 40, 20};
    // Expected Output: 20
    cout << "Test Case 1: " << sol.minCost(heights1) << " (Expected: 20)" << endl;

    // Test Case 2
    vector<int> heights2 = {30, 20, 50, 10, 40};
    // Expected Output: 30
    cout << "Test Case 2: " << sol.minCost(heights2) << " (Expected: 30)" << endl;

    return 0;
}