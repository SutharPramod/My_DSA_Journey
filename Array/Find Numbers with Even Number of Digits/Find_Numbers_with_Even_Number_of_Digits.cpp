#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int cnt = 0;
        for(int num : nums){
            int digits = 0;
            while(num > 0){
                num /= 10;
                digits++;
            }
            if(digits % 2 == 0) cnt++;
        }
        return cnt;
    }
};

int main() {
    Solution sol;

    // Test Case 1: [12, 345, 2, 6, 7896]
    // 12 (2 digits), 7896 (4 digits) are even.
    vector<int> nums1 = {12, 345, 2, 6, 7896};
    // Expected: 2

    // Test Case 2: [555, 901, 482, 1771]
    // 1771 (4 digits) is even.
    vector<int> nums2 = {555, 901, 482, 1771};
    // Expected: 1

    cout << "Test Case 1: " << sol.findNumbers(nums1) << " (Expected: 2)" << endl;
    cout << "Test Case 2: " << sol.findNumbers(nums2) << " (Expected: 1)" << endl;

    return 0;
}