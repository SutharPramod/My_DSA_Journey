#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

class Solution {
public:
    int findMinDifference(vector<string>& timePoints) {
        vector<int> minutes;
        for (const string& time : timePoints) {
            int h = stoi(time.substr(0, 2));
            int m = stoi(time.substr(3, 2));
            minutes.push_back(h * 60 + m);
        }
        
        sort(minutes.begin(), minutes.end());
        
        int minDiff = 24 * 60; // Max possible difference
        for (size_t i = 1; i < minutes.size(); ++i) {
            minDiff = min(minDiff, minutes[i] - minutes[i - 1]);
        }
        
        // Check the circular difference between the last and the first element
        int circularDiff = (24 * 60 - minutes.back()) + minutes.front();
        minDiff = min(minDiff, circularDiff);
        
        return minDiff;
    }
};

int main() {
    Solution solution;
    
    vector<string> test1 = {"23:59", "00:00"};
    cout << "Test 1 Output: " << solution.findMinDifference(test1) << " (Expected: 1)" << endl;
    
    vector<string> test2 = {"00:00", "23:59", "00:00"};
    cout << "Test 2 Output: " << solution.findMinDifference(test2) << " (Expected: 0)" << endl;
    
    vector<string> test3 = {"01:01", "02:01", "03:00"};
    cout << "Test 3 Output: " << solution.findMinDifference(test3) << " (Expected: 59)" << endl;
    
    return 0;
}