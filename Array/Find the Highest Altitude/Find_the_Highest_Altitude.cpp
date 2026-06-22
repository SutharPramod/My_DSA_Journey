#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int n = gain.size();

        int ha = 0, t = 0;

        for(int i = 0 ; i < n ; i++){
            t += gain[i];
            ha = max(ha,t);
        }
        return ha;
    }
};

int main() {
    Solution sol;

    // Test Case 1: Net gains/losses: [-5, 1, 5, 0, -7]
    // Altitudes: 0 -> -5 -> -4 -> 1 -> 1 -> -6
    // Highest: 1
    vector<int> gain1 = {-5, 1, 5, 0, -7};

    // Test Case 2: Net gains/losses: [-4, -3, -2, -1, 4, 3, 2]
    // Altitudes: 0 -> -4 -> -7 -> -9 -> -10 -> -6 -> -3 -> -1
    // Highest: 0 (the starting point)
    vector<int> gain2 = {-4, -3, -2, -1, 4, 3, 2};

    cout << "Test Case 1: " << sol.largestAltitude(gain1) << " (Expected: 1)" << endl;
    cout << "Test Case 2: " << sol.largestAltitude(gain2) << " (Expected: 0)" << endl;

    return 0;
}