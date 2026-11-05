#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

class Solution {
private:
    int backtrack(vector<int>& count) {
        int totalCount = 0;
        for (int i = 0; i < 26; ++i) {
            if (count[i] > 0) {
                // Choose this tile
                totalCount++;
                count[i]--;
                
                // Explore further sequences
                totalCount += backtrack(count);
                
                // Un-choose this tile (backtrack)
                count[i]++;
            }
        }
        return totalCount;
    }

public:
    int numTilePossibilities(string tiles) {
        vector<int> count(26, 0);
        for (char c : tiles) {
            count[c - 'A']++;
        }
        return backtrack(count);
    }
};

int main() {
    Solution sol;
    
    string tiles1 = "AAB";
    cout << "Input: tiles = \"" << tiles1 << "\"" << endl;
    cout << "Output: " << sol.numTilePossibilities(tiles1) << endl; // Expected: 8
    
    string tiles2 = "V";
    cout << "Input: tiles = \"" << tiles2 << "\"" << endl;
    cout << "Output: " << sol.numTilePossibilities(tiles2) << endl; // Expected: 1
    
    return 0;
}