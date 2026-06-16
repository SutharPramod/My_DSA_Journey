#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> createTargetArray(vector<int>& nums, vector<int>& index) {
        int n = nums.size();
        vector<int> t;

        for(int i = 0 ; i < n ; i++){
            t.insert(t.begin() + index[i] , nums[i]);
        }

        return t;
    }
};

/**
 * Helper function to print the vector result.
 */
void printVector(const vector<int>& v) {
    cout << "[";
    for (size_t i = 0; i < v.size(); ++i) {
        cout << v[i] << (i == v.size() - 1 ? "" : ", ");
    }
    cout << "]" << endl;
}

int main() {
    Solution sol;

    // Test Case 1:
    // nums = [0, 1, 2, 3, 4], index = [0, 1, 2, 2, 1]
    // Step 1: Insert 0 at 0 -> [0]
    // Step 2: Insert 1 at 1 -> [0, 1]
    // Step 3: Insert 2 at 2 -> [0, 1, 2]
    // Step 4: Insert 3 at 2 -> [0, 1, 3, 2] (2 shifts right)
    // Step 5: Insert 4 at 1 -> [0, 4, 1, 3, 2] (1, 3, 2 shift right)
    vector<int> nums1 = {0, 1, 2, 3, 4};
    vector<int> index1 = {0, 1, 2, 2, 1};

    vector<int> res1 = sol.createTargetArray(nums1, index1);
    cout << "Output: "; printVector(res1); // Expected: [0, 4, 1, 3, 2]

    return 0;
}