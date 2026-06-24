#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    int minCostToMoveChips(vector<int>& position) {
        int e = 0 , o = 0;
        for(int x : position){
            if(x % 2 == 0) e++;
            else o++;
        }
        return min(e,o);
    }
};

int main() {
    Solution sol;

    // Test Case 1: position = [1, 2, 3]
    // Odd positions: 1, 3 (Count = 2)
    // Even positions: 2 (Count = 1)
    // Move chip at 2 to 1 or 3 -> Cost = 1.
    vector<int> pos1 = {1, 2, 3};

    // Test Case 2: position = [2, 2, 2, 3, 3]
    // Even positions: 2, 2, 2 (Count = 3)
    // Odd positions: 3, 3 (Count = 2)
    // Move the two chips at 3 to 2 -> Cost = 2.
    vector<int> pos2 = {2, 2, 2, 3, 3};

    cout << "Test Case 1: " << sol.minCostToMoveChips(pos1) << " (Expected: 1)" << endl;
    cout << "Test Case 2: " << sol.minCostToMoveChips(pos2) << " (Expected: 2)" << endl;

    return 0;
}