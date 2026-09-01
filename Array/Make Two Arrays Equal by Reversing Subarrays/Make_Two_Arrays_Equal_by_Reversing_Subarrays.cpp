#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    bool canBeEqual(vector<int>& target, vector<int>& arr) {
        int maxv = target[0];
        int minv = target[0];

        for(int x : arr){
            maxv = max(x , maxv);
            minv = min(x , minv);
        }

        for(int x : target){
            maxv = max(x , maxv);
            minv = min(x , minv);
        }

        vector<int> dp(maxv-minv+1);

        for(int x : arr){
            dp[x-minv]++;
        }

        for(int x : target){
            dp[x-minv]--;
            if(dp[x-minv] < 0) return false;
        }
        return true;
    }
};

int main() {
    Solution sol;

    // Test Case 1
    vector<int> target1 = {1, 2, 3, 4};
    vector<int> arr1 = {2, 4, 1, 3};
    cout << "Test Case 1: " << (sol.canBeEqual(target1, arr1) ? "true" : "false")
         << " (Expected: true)" << endl;

    // Test Case 2
    vector<int> target2 = {7};
    vector<int> arr2 = {7};
    cout << "Test Case 2: " << (sol.canBeEqual(target2, arr2) ? "true" : "false")
         << " (Expected: true)" << endl;

    // Test Case 3
    vector<int> target3 = {3, 7, 9};
    vector<int> arr3 = {3, 7, 11};
    cout << "Test Case 3: " << (sol.canBeEqual(target3, arr3) ? "true" : "false")
         << " (Expected: false)" << endl;

    return 0;
}