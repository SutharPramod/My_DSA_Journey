#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> findPeaks(vector<int>& mountain) {
        vector<int> peaks;
        for(int i = 1 ; i < mountain.size() -  1 ; i++){
            if(mountain[i] > mountain[i-1] && mountain[i] > mountain[i+1]) peaks.push_back(i);
        }
        return peaks;
    }
};

int main() {
    Solution sol;

    // Test Case 1
    vector<int> mountain1 = {2, 4, 4};
    vector<int> res1 = sol.findPeaks(mountain1);
    cout << "Test Case 1 Peaks: [ ";
    for (int idx : res1) cout << idx << " ";
    cout << "] (Expected: [])" << endl;

    // Test Case 2
    vector<int> mountain2 = {1, 4, 3, 8, 5};
    vector<int> res2 = sol.findPeaks(mountain2);
    cout << "Test Case 2 Peaks: [ ";
    for (int idx : res2) cout << idx << " ";
    cout << "] (Expected: [1, 3])" << endl;

    return 0;
}