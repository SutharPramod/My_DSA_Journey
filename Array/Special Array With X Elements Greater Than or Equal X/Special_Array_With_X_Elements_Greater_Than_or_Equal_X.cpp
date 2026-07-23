#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    int fun(vector<int>& nums , int i){
        int st = 0 , end = nums.size() - 1 , a = -1;
        while(st <= end){
            int m = st + (end - st)/2;
            if(nums[m] >= i) {a = m;end = m - 1;}
            else st = m + 1;
        }
        return a;
    }
    int specialArray(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n = nums.size();
        if(nums[0] >= n) return n;
        for(int i = 0 ; i <= n ; i++){
            int cnt = n - fun(nums , i);
            if(i == cnt) return i;
        }
        return -1;
    }
};

int main() {
    Solution sol;

    // Test Case 1: x = 2 because there are 2 elements >= 2 (which are 3 and 5)
    vector<int> nums1 = {3, 5};
    // Expected: 2

    // Test Case 2: No such x exists
    vector<int> nums2 = {0, 0};
    // Expected: -1

    cout << "Test Case 1: " << sol.specialArray(nums1) << " (Expected: 2)" << endl;
    cout << "Test Case 2: " << sol.specialArray(nums2) << " (Expected: -1)" << endl;

    return 0;
}