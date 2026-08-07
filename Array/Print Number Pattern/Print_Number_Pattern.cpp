#include <iostream>
#include <vector>

using namespace std;

class Solution {
  public:
    vector<int> printPat(int n) {
        vector<int> ans;
        for(int i = n ; i >= 1 ; i--){
            for(int j = n ; j >= 1 ; j--){
                for(int k = n ; k >= n - i + 1 ; k--){
                    ans.push_back(j);
                }
            }
            ans.push_back(-1);
        }
        return ans;
    }
};

int main() {
    Solution sol;

    // Test Case 1: n = 2
    int n1 = 2;
    vector<int> res1 = sol.printPat(n1);
    cout << "Test Case 1 (n=2): [";
    for (size_t i = 0; i < res1.size(); ++i) {
        cout << res1[i] << (i == res1.size() - 1 ? "" : ", ");
    }
    cout << "]" << endl;
    // Expected: [2, 2, 1, 1, -1, 2, 1, -1]

    // Test Case 2: n = 3
    int n2 = 3;
    vector<int> res2 = sol.printPat(n2);
    cout << "Test Case 2 (n=3): [";
    for (size_t i = 0; i < res2.size(); ++i) {
        cout << res2[i] << (i == res2.size() - 1 ? "" : ", ");
    }
    cout << "]" << endl;
    // Expected: [3, 3, 3, 2, 2, 2, 1, 1, 1, -1, 3, 3, 2, 2, 1, 1, -1, 3, 2, 1, -1]

    return 0;
}