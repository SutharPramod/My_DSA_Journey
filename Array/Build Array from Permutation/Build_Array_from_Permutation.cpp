#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        int n = nums.size();
        
        for(int i = 0 ; i < n ; i++){
            nums[i] += 1024 * (nums[nums[i]] % 1024);
        }

        for(int i = 0 ; i < n ; i++){
            nums[i] /= 1024;
        }

        return nums;
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

    // Test Case 1: [0, 2, 1, 5, 3, 4]
    // Explanation: 
    // ans[0] = nums[nums[0]] = nums[0] = 0
    // ans[1] = nums[nums[1]] = nums[2] = 1
    // ...
    vector<int> nums1 = {0, 2, 1, 5, 3, 4};
    // Expected Output: [0, 1, 2, 4, 5, 3]

    // Test Case 2: [5, 0, 1, 2, 3, 4]
    vector<int> nums2 = {5, 0, 1, 2, 3, 4};
    // Expected Output: [4, 5, 0, 1, 2, 3]

    cout << "Input 1: "; printVector(nums1);
    vector<int> res1 = sol.buildArray(nums1);
    cout << "Output 1: "; printVector(res1);

    cout << "\nInput 2: "; printVector(nums2);
    vector<int> res2 = sol.buildArray(nums2);
    cout << "Output 2: "; printVector(res2);

    return 0;
}