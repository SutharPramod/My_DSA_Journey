#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> res(candies.size(),true);

        int hc = 0;

        for(int i : candies){
            hc = max(hc,i);
        }
        int idx = 0;
        for(int i : candies){
            if((i + extraCandies) < hc) res[idx] = false;
            idx++;
        }

        return res;
    }
};

/**
 * Helper function to print the boolean vector result.
 */
void printBoolVector(const vector<bool>& v) {
    cout << "[";
    for (size_t i = 0; i < v.size(); ++i) {
        cout << (v[i] ? "true" : "false") << (i == v.size() - 1 ? "" : ", ");
    }
    cout << "]" << endl;
}

int main() {
    Solution sol;

    // Test Case 1: [2, 3, 5, 1, 3], extraCandies = 3
    // Max is 5. 
    // Kid 0: 2 + 3 = 5 >= 5 (true)
    // Kid 1: 3 + 3 = 6 >= 5 (true)
    // Kid 2: 5 + 3 = 8 >= 5 (true)
    // Kid 3: 1 + 3 = 4 < 5  (false)
    // Kid 4: 3 + 3 = 6 >= 5 (true)
    vector<int> candies1 = {2, 3, 5, 1, 3};
    int extra1 = 3;
    // Expected Output: [true, true, true, false, true]

    // Test Case 2: [4, 2, 1, 1, 2], extraCandies = 1
    // Max is 4. Only the first kid can reach or exceed it.
    vector<int> candies2 = {4, 2, 1, 1, 2};
    int extra2 = 1;
    // Expected Output: [true, false, false, false, false]

    cout << "Test Case 1: " << endl;
    vector<bool> res1 = sol.kidsWithCandies(candies1, extra1);
    cout << "Output: "; printBoolVector(res1);

    cout << "\nTest Case 2: " << endl;
    vector<bool> res2 = sol.kidsWithCandies(candies2, extra2);
    cout << "Output: "; printBoolVector(res2);

    return 0;
}