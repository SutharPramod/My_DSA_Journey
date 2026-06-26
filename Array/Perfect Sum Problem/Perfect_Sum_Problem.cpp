#include <iostream>
#include <vector>

using namespace std;

class Solution {
  public:
    int perfectSum(vector<int>& arr, int target) {
        vector<int> dp(target+1,0);
        dp[0] = 1;
        
        for(int i = 0 ; i < arr.size() ; i++){
            int j = target;
            while(j >= arr[i]){
                dp[j] += dp[j - arr[i]];
                j--;
            }
        }
        return dp[target];
    }
};

int main() {
    Solution sol;

    // Test Case: Target sum = 10
    // Valid Subsets: {2, 3, 5}, {2, 8}, {10}
    vector<int> arr = {2, 3, 5, 8, 10};
    int target = 10;

    cout << "Total subsets with sum " << target << " is: " 
         << sol.perfectSum(arr, target) << " (Expected: 3)" << endl;

    return 0;
}