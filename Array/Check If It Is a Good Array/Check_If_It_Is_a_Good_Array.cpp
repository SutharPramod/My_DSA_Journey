#include <iostream>
#include <vector>
#include <numeric> // For std::gcd

using namespace std;

class Solution {
public:
    bool isGoodArray(vector<int>& nums) {
        int result = nums[0];
        for(int i = 1 ; i < nums.size() ; i++){
            result = gcd(result,nums[i]);
            if(result == 1) return true;
        }
        return result == 1;
    }
    int gcd(int a ,int b){
        if(a == 0) return b;
        return gcd(b%a , a);
    }
};

int main() {
    Solution sol;

    // Test Case 1: Coprime subset exists (e.g., GCD of 12 and 5 is 1)
    // 12 * (-2) + 5 * 5 = -24 + 25 = 1
    vector<int> nums1 = {12, 5, 7, 23};
    // Expected: True

    // Test Case 2: All elements share a common factor of 3
    // The minimum value we can form is 3, never 1.
    vector<int> nums2 = {6, 9, 15};
    // Expected: False

    cout << "Test Case 1: " << (sol.isGoodArray(nums1) ? "True" : "False") << " (Expected: True)" << endl;
    cout << "Test Case 2: " << (sol.isGoodArray(nums2) ? "True" : "False") << " (Expected: False)" << endl;

    return 0;
}