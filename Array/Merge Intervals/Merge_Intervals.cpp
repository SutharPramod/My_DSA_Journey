#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& arr) {
        sort(arr.begin(), arr.end());

        for(int i = 1 ; i < arr.size() ; i++){
            if(arr[i][0] <= arr[i-1][1]){
                arr[i][0] = arr[i-1][0];

                arr[i][1] = max(arr[i-1][1] , arr[i][1]);

                arr.erase(arr.begin() + i - 1);

                i--;
            }
        }
        return arr;
    }
};

int main() {
    Solution sol;

    // Test Case 1
    vector<vector<int>> intervals1 = {{1, 3}, {2, 6}, {8, 10}, {15, 18}};
    auto res1 = sol.merge(intervals1);
    cout << "Test Case 1 Output: ";
    for (auto& iv : res1) cout << "[" << iv[0] << "," << iv[1] << "] ";
    cout << "\n(Expected: [1,6] [8,10] [15,18])\n" << endl;

    // Test Case 2
    vector<vector<int>> intervals2 = {{1, 4}, {4, 5}};
    auto res2 = sol.merge(intervals2);
    cout << "Test Case 2 Output: ";
    for (auto& iv : res2) cout << "[" << iv[0] << "," << iv[1] << "] ";
    cout << "\n(Expected: [1,5])" << endl;

    return 0;
}