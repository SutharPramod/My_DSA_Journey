#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int n = nums.size();

        int sum = 0;
        for (int x : nums) {
            sum += x;
        }

        int actual = (n * (n + 1)) / 2;

        int dup = -1;
        for (int i = 0 ; i < n ; i++) {
            int val = abs(nums[i]);
            if(nums[val - 1] < 0){
                dup = val;
            }else{
                nums[val - 1] = -nums[val - 1];
            }
        }

        int miss = actual - (sum - dup);

        return {dup , miss};
    }
};

int main() {
    Solution sol;

    // Test Case 1
    vector<int> nums1 = {1, 2, 2, 4};
    auto res1 = sol.findErrorNums(nums1);
    cout << "Test Case 1 Output: [" << res1[0] << ", " << res1[1] << "] (Expected: [2, 3])" << endl;

    // Test Case 2
    vector<int> nums2 = {1, 1};
    auto res2 = sol.findErrorNums(nums2);
    cout << "Test Case 2 Output: [" << res2[0] << ", " << res2[1] << "] (Expected: [1, 2])" << endl;

    return 0;
}