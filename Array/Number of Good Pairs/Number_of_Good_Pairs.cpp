#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int gp = 0;
        for(int i = 0 ; i < nums.size() ; i++){
            for(int j = 0; j < nums.size() ; j++){
                if(i < j && nums[i] == nums[j]){
                    gp++;
                }
            }
        }
        return gp;
    }
};

int main() {
    Solution sol;

    // Test Case 1: [1, 2, 3, 1, 1, 3]
    // Pairs: (0,3), (0,4), (3,4) for '1's and (2,5) for '3's
    vector<int> nums1 = {1, 2, 3, 1, 1, 3};
    // Expected Output: 4

    // Test Case 2: [1, 1, 1, 1]
    // All combinations: 4 * (4 - 1) / 2 = 6
    vector<int> nums2 = {1, 1, 1, 1};
    // Expected Output: 6

    // Test Case 3: [1, 2, 3]
    vector<int> nums3 = {1, 2, 3};
    // Expected Output: 0

    cout << "Test Case 1: " << sol.numIdenticalPairs(nums1) << " (Expected: 4)" << endl;
    cout << "Test Case 2: " << sol.numIdenticalPairs(nums2) << " (Expected: 6)" << endl;
    cout << "Test Case 3: " << sol.numIdenticalPairs(nums3) << " (Expected: 0)" << endl;

    return 0;
}