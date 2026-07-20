#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    
    bool isSubsetSum(vector<int>& arr, int sum) {
        int n = arr.size();
        vector<int> dp(sum+1,false);
        dp[0] = true;
        for(int i = 0 ; i < n ; i++){
            int j = sum;
            while(j >= arr[i]){
                if(dp[j - arr[i]]){
                    dp[j] = true;
                }
                j--;
            }
        }
        return dp[sum];
    }
};

int main() {
    Solution sol;

    vector<int> arr = {3, 34, 4, 12, 5, 2};
    int sum = 9;

    // Test Case: Subset {4, 5} sums up to 9
    if (sol.isSubsetSum(arr, sum)) {
        cout << "Found a subset with given sum" << endl; // Expected
    } else {
        cout << "No subset with given sum" << endl;
    }

    return 0;
}