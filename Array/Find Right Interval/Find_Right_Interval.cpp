#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

class Solution {
public:
    vector<int> findRightInterval(vector<vector<int>>& intervals) {
        int n = intervals.size();
        vector<int> ans;
        for(int i = 0 ; i < n; i++){
            int in = -1;
            int sv = INT_MAX;
            for(int j = 0 ; j < n ; j++){
                    int s1 = intervals[i][0] , e1 = intervals[i][1];
                    int s2 = intervals[j][0] , e2 = intervals[j][1];
                    if(s2 >= e1){
                        if(s2 < sv){
                            sv = s2;
                            in = j;
                        }
                    }
            }
            ans.push_back(in);
        }
        return ans;
    }
};

int main() {
    Solution sol;

    // Test Case 1
    vector<vector<int>> intervals1 = {{1, 2}};
    // Expected: [-1] (No interval has start >= 2)

    // Test Case 2
    vector<vector<int>> intervals2 = {{3, 4}, {2, 3}, {1, 2}};
    // Expected: [-1, 0, 1]

    // Test Case 3
    vector<vector<int>> intervals3 = {{1, 4}, {2, 3}, {3, 4}};
    // Expected: [-1, 2, 2]

    vector<int> res2 = sol.findRightInterval(intervals2);
    cout << "Test Case 2 Results: [";
    for (size_t i = 0; i < res2.size(); ++i) {
        cout << res2[i] << (i == res2.size() - 1 ? "" : ", ");
    }
    cout << "] (Expected: [-1, 0, 1])" << endl;

    return 0;
}