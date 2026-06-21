#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>

using namespace std;

class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        int freq[101] = {0};
        vector<int> ans;

        for(int i = 0 ; i < nums.size() ; i++){
            freq[nums[i]]++;
        }

        int rs = 0;
        for(int i = 0 ; i < 101 ; i++){
            int t = freq[i];
            freq[i] = rs;
            rs += t;
        }

        for(int x : nums){
            ans.push_back(freq[x]);
        }

        return ans;
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

    // Test Case 1: [8, 1, 2, 2, 3]
    // For 8: 1, 2, 2, 3 are smaller (4)
    // For 1: none are smaller (0)
    // For 2: 1 is smaller (1)
    // ...
    vector<int> nums1 = {8, 1, 2, 2, 3};
    // Expected Output: [4, 0, 1, 1, 3]

    // Test Case 2: [6, 5, 4, 8]
    vector<int> nums2 = {6, 5, 4, 8};
    // Expected Output: [2, 1, 0, 3]

    cout << "Input 1: "; printVector(nums1);
    vector<int> res1 = sol.smallerNumbersThanCurrent(nums1);
    cout << "Output 1: "; printVector(res1);

    cout << "\nInput 2: "; printVector(nums2);
    vector<int> res2 = sol.smallerNumbersThanCurrent(nums2);
    cout << "Output 2: "; printVector(res2);

    return 0;
}