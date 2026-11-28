#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>

using namespace std;

class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        unordered_map<int, int> countMap;
        countMap[0] = -1;
        int maxLen = 0;
        int count = 0;

        for (int i = 0; i < nums.size(); ++i) {
            count += (nums[i] == 1 ? 1 : -1);

            if (countMap.find(count) != countMap.end()) {
                maxLen = max(maxLen, i - countMap[count]);
            } else {
                countMap[count] = i;
            }
        }

        return maxLen;
    }
};

int main() {
    Solution solution;

    vector<int> nums1 = {0, 1};
    cout << "Test 1 Output: " << solution.findMaxLength(nums1) << " (Expected: 2)" << endl;

    vector<int> nums2 = {0, 1, 0};
    cout << "Test 2 Output: " << solution.findMaxLength(nums2) << " (Expected: 2)" << endl;

    vector<int> nums3 = {0, 1, 1, 0, 1, 1, 1, 0};
    cout << "Test 3 Output: " << solution.findMaxLength(nums3) << " (Expected: 4)" << endl;

    return 0;
}