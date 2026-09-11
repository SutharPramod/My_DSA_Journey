#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_set>
#include <climits>

using namespace std;

class Solution {
public:
    bool canMakeArithmeticProgression(vector<int>& arr) {
        sort(arr.begin() , arr.end());
        int n = arr.size() - 1;
        int d = arr[n] - arr[n-1];
        for(int i = n ; i >= 1 ; i--){
            if((arr[i] - arr[i-1]) != d) return false;
        }
        return true;
    }
};

int main() {
    Solution sol;

    // Test Case 1
    vector<int> arr1 = {3, 5, 1};
    cout << "Test Case 1: " << (sol.canMakeArithmeticProgression(arr1) ? "true" : "false")
         << " (Expected: true)" << endl;

    // Test Case 2
    vector<int> arr2 = {1, 2, 4};
    cout << "Test Case 2: " << (sol.canMakeArithmeticProgression(arr2) ? "true" : "false")
         << " (Expected: false)" << endl;

    return 0;
}