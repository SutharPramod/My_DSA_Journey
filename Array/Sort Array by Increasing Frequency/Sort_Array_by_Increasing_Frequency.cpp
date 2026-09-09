#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>

using namespace std;

class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        unordered_map<int, int> freq;
        for (int x : nums) {
            freq[x]++;
        }

        sort(nums.begin(), nums.end(), [&freq](int a, int b) {
            // Rule 1: If frequencies match, sort by value in DESCENDING order
            if (freq[a] == freq[b]) {
                return a > b;
            }
            // Rule 2: Otherwise, sort by frequency in ASCENDING order
            return freq[a] < freq[b];
        });

        return nums;
    }
};


int main() {
    Solution sol;

    // Test Case 1
    vector<int> nums1 = {1, 1, 2, 2, 2, 3};
    sol.frequencySort(nums1);
    cout << "Test Case 1 Output: [ ";
    for (int x : nums1) cout << x << " ";
    cout << "]\n(Expected: [3, 1, 1, 2, 2, 2])\n" << endl;

    // Test Case 2 (Frequency Ties)
    vector<int> nums2 = {2, 3, 1, 3, 2};
    sol.frequencySort(nums2);
    cout << "Test Case 2 Output: [ ";
    for (int x : nums2) cout << x << " ";
    cout << "]\n(Expected: [1, 3, 3, 2, 2])\n" << endl;

    // Test Case 3 (Negative numbers)
    vector<int> nums3 = {-1, 1, -6, 4, 5, -6, 1, 4, 1};
    sol.frequencySort(nums3);
    cout << "Test Case 3 Output: [ ";
    for (int x : nums3) cout << x << " ";
    cout << "]\n(Expected: [5, -1, 4, 4, -6, -6, 1, 1, 1])" << endl;

    return 0;
}