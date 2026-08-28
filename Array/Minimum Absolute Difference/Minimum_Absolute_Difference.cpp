#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        sort(arr.begin(),arr.end());

        int md = INT_MAX;

        for(int i = 1 ; i < arr.size() ; i++){
            md = min(md, abs(arr[i] - arr[i-1]));
        }

        vector<vector<int>> res;

        for(int i = 1 ; i < arr.size() ; i++){
            if(abs(arr[i] - arr[i - 1]) == md){
                res.push_back({arr[i-1],arr[i]});
            }
        }

        return res;
    }
};

int main() {
    Solution sol;

    // Test Case 1
    vector<int> arr1 = {4, 2, 1, 3};
    auto res1 = sol.minimumAbsDifference(arr1);
    cout << "Test Case 1 Output: ";
    for (auto& p : res1) cout << "[" << p[0] << "," << p[1] << "] ";
    cout << "\n(Expected: [1,2] [2,3] [3,4])\n" << endl;

    // Test Case 2
    vector<int> arr2 = {1, 3, 6, 10, 15};
    auto res2 = sol.minimumAbsDifference(arr2);
    cout << "Test Case 2 Output: ";
    for (auto& p : res2) cout << "[" << p[0] << "," << p[1] << "] ";
    cout << "\n(Expected: [1,3])\n" << endl;

    // Test Case 3
    vector<int> arr3 = {3, 8, -10, 23, 19, -4, -14, 27};
    auto res3 = sol.minimumAbsDifference(arr3);
    cout << "Test Case 3 Output: ";
    for (auto& p : res3) cout << "[" << p[0] << "," << p[1] << "] ";
    cout << "\n(Expected: [-14,-10] [19,23] [23,27])" << endl;

    return 0;
}