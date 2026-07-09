#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int l = 0 , h = arr.size()-1;
        while(l <= h){
            int m = l + (h-l)/2;
            int c = arr[m] - (m+1);
            if(c >= k){
                h = m - 1;
            }else{
                l = m + 1;
            }
        }
        return l + k;
    }
};

int main() {
    Solution sol;

    // Test Case 1: Missing numbers are interspersed
    // Missing: [1, 5, 6, 8, 9, 10, 12, ...]
    // 5th missing is 9.
    vector<int> arr1 = {2, 3, 4, 7, 11};
    int k1 = 5;

    // Test Case 2: Missing numbers are at the front
    // Missing: [1, 2, 3, 4, ...]
    // 2nd missing is 2.
    vector<int> arr2 = {5, 6, 7, 8, 9};
    int k2 = 2;

    cout << "Test Case 1: " << sol.findKthPositive(arr1, k1) << " (Expected: 9)" << endl;
    cout << "Test Case 2: " << sol.findKthPositive(arr2, k2) << " (Expected: 2)" << endl;

    return 0;
}