#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        
        int fm , sm , tm , fs , ss;
        fm = sm = tm = INT_MIN;
        fs = ss = INT_MAX;

        for(int n : nums){
            if(n > fm){
                tm = sm ;
                sm = fm ;
                fm = n;
            }else if(n > sm){
                tm = sm ;
                sm = n ;
            }else if(n > tm){
                tm = n;
            }

            if(n < fs){
                ss = fs ;
                fs = n ;
            }else if(n < ss){
                ss = n;
            }
        }
        
        return max(fm * sm * tm , fm * fs * ss);
    }
};

int main() {
    Solution sol;

    // Test Case 1: Positive numbers
    vector<int> nums1 = {1, 2, 3, 4};
    cout << "Test Case 1: " << sol.maximumProduct(nums1) << " (Expected: 24)" << endl;

    // Test Case 2: Negative numbers included
    vector<int> nums2 = {-10, -10, 1, 3, 2};
    cout << "Test Case 2: " << sol.maximumProduct(nums2) << " (Expected: 300)" << endl;

    return 0;
}