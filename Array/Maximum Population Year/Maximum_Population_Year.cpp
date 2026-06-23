#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int maximumPopulation(vector<vector<int>>& logs) {
        vector<int> alive(100);
        if(logs.size() == 1) return logs[0][0];
        for(auto log : logs){
            for(int i = log[0] ; i < log[1] ; i++){
                alive[i - 1950]++;
            }
        }

        int mp = 0;
        int idx;
        for(int i = 0 ; i < 100 ; i++){
            if(mp < alive[i]) {
                mp = alive[i];
                idx = i + 1950;
            }
        }

        return idx;
    }
};

int main() {
    Solution sol;

    // Test Case 1: [[1993,1999],[2000,2010]]
    // No overlapping years. Max population is 1. Earliest is 1993.
    vector<vector<int>> logs1 = {{1993, 1999}, {2000, 2010}};

    // Test Case 2: [[1950,1961],[1960,1971],[1970,1981]]
    // Overlaps at 1960 and 1970.
    vector<vector<int>> logs2 = {{1950, 1961}, {1960, 1971}, {1970, 1981}};

    cout << "Test Case 1: " << sol.maximumPopulation(logs1) << " (Expected: 1993)" << endl;
    cout << "Test Case 2: " << sol.maximumPopulation(logs2) << " (Expected: 1960)" << endl;

    return 0;
}