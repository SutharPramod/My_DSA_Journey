#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
   vector<int> shuffle(vector<int>& nums, int n) {
        vector<int>ans(2*n);
        for(int i=0;i<n;i++)
        {
            ans[2*i]=nums[i];
            ans[2*i+1]=nums[i+n];
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

    // Test Case 1: [2, 5, 1, 3, 4, 7], n = 3
    // x = [2, 5, 1], y = [3, 4, 7]
    vector<int> nums1 = {2, 5, 1, 3, 4, 7};
    int n1 = 3;
    // Expected Output: [2, 3, 5, 4, 1, 7]

    // Test Case 2: [1, 2, 3, 4, 4, 3, 2, 1], n = 4
    // x = [1, 2, 3, 4], y = [4, 3, 2, 1]
    vector<int> nums2 = {1, 2, 3, 4, 4, 3, 2, 1};
    int n2 = 4;
    // Expected Output: [1, 4, 2, 3, 3, 2, 4, 1]

    cout << "Input 1: "; printVector(nums1);
    vector<int> res1 = sol.shuffle(nums1, n1);
    cout << "Output 1: "; printVector(res1);

    cout << "\nInput 2: "; printVector(nums2);
    vector<int> res2 = sol.shuffle(nums2, n2);
    cout << "Output 2: "; printVector(res2);

    return 0;
}