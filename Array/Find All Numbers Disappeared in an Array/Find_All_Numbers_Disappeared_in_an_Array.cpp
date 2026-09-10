#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int n = nums.size();
        
        for(int i = 0 ; i < n ; i++){
            int idx = abs(nums[i]) - 1;
            nums[idx] = -abs(nums[idx]);
        }

        int idx = 0;
        for(int i = 0 ; i < n ; i++){
            if(nums[i] > 0){
                nums[idx++] = i + 1;
            }
        }

        nums.resize(idx);

        return nums;

    }
};

int main() {
    Solution sol;

    // Test Case 1
    vector<int> nums1 = {4, 3, 2, 7, 8, 2, 3, 1};
    auto res1 = sol.findDisappearedNumbers(nums1);
    cout << "Test Case 1 Output: [ ";
    for (int x : res1) cout << x << " ";
    cout << "]\n(Expected: [5 6])\n" << endl;

    // Test Case 2
    vector<int> nums2 = {1, 1};
    auto res2 = sol.findDisappearedNumbers(nums2);
    cout << "Test Case 2 Output: [ ";
    for (int x : res2) cout << x << " ";
    cout << "]\n(Expected: [2])" << endl;

    return 0;
}