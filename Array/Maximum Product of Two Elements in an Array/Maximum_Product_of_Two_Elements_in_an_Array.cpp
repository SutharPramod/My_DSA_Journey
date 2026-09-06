#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int m1 , m2;
        m1 = m2 = INT_MIN;

        for(int& x : nums){
            if(x > m1){
                m2 = m1;
                m1 = x;
            }else if(x > m2){
                m2 = x;
            }
        }

        return (m1 - 1) * (m2 - 1);
    }
};

int main() {
    Solution sol;

    // Test Case 1
    vector<int> nums1 = {3, 4, 5, 2};
    cout << "Test Case 1: " << sol.maxProduct(nums1) << " (Expected: 12)" << endl;

    // Test Case 2
    vector<int> nums2 = {1, 5, 4, 5};
    cout << "Test Case 2: " << sol.maxProduct(nums2) << " (Expected: 16)" << endl;

    // Test Case 3
    vector<int> nums3 = {3, 7};
    cout << "Test Case 3: " << sol.maxProduct(nums3) << " (Expected: 12)" << endl;

    return 0;
}