#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        sort(nums.begin() , nums.end());

        int idx = 0;
        for(int i = 0 ; i < nums.size() ; i++){
            if(nums[i] % 2 == 0){
                swap(nums[i],nums[idx]);
                idx++;
            }
        }
        return nums;
    }
};

int main() {
    Solution sol;

    // Test Case 1
    vector<int> nums1 = {3, 1, 2, 4};
    sol.sortArrayByParity(nums1);
    cout << "Test Case 1 Output: [ ";
    for (int x : nums1) cout << x << " ";
    cout << "]" << endl;

    // Test Case 2
    vector<int> nums2 = {0};
    sol.sortArrayByParity(nums2);
    cout << "Test Case 2 Output: [ ";
    for (int x : nums2) cout << x << " ";
    cout << "]" << endl;
    return 0;
}