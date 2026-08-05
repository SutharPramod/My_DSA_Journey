#include <iostream>
#include <vector>
#include <climits>

using namespace std;

class Solution {
public:
    int thirdMax(vector<int>& nums) {
        long f , s , t;
        f = s = t = LONG_MIN;
        for(int x : nums){
            if(x == f || x == s || x == t) continue;

            if(f == LONG_MIN || x > f){
                t = s;
                s = f;
                f = x;
            }else if(s == LONG_MIN || x > s){
                t = s;
                s = x;
            }else if(t == LONG_MIN || x > t){
                t = x;
            }
        }
        return t != LONG_MIN ? t : f;
    }
};

int main() {
    Solution sol;

    // Test Case 1: [3, 2, 1]
    vector<int> nums1 = {3, 2, 1};
    // Expected Output: 1
    cout << "Test Case 1: " << sol.thirdMax(nums1) << " (Expected: 1)" << endl;

    // Test Case 2: [1, 2] (Third distinct max doesn't exist)
    vector<int> nums2 = {1, 2};
    // Expected Output: 2
    cout << "Test Case 2: " << sol.thirdMax(nums2) << " (Expected: 2)" << endl;

    // Test Case 3: [2, 2, 3, 1] (Duplicates are ignored)
    vector<int> nums3 = {2, 2, 3, 1};
    // Expected Output: 1
    cout << "Test Case 3: " << sol.thirdMax(nums3) << " (Expected: 1)" << endl;

    return 0;
}