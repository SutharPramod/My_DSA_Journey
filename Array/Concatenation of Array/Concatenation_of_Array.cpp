#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int> ans;

        for(int i  = 0 ; i < nums.size() * 2 ; i++){
            ans.push_back(nums[i % nums.size()]);
        }

        return {ans};
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

    // Test Case 1: [1, 2, 1]
    vector<int> nums1 = {1, 2, 1};
    // Expected Output: [1, 2, 1, 1, 2, 1]

    // Test Case 2: [1, 3, 2, 1]
    vector<int> nums2 = {1, 3, 2, 1};
    // Expected Output: [1, 3, 2, 1, 1, 3, 2, 1]

    cout << "Input 1: "; printVector(nums1);
    vector<int> res1 = sol.getConcatenation(nums1);
    cout << "Output 1: "; printVector(res1);

    cout << "\nInput 2: "; printVector(nums2);
    vector<int> res2 = sol.getConcatenation(nums2);
    cout << "Output 2: "; printVector(res2);

    return 0;
}