#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n1 = nums1.size();
        int n2 = nums2.size();

        if(n1 > n2) return findMedianSortedArrays(nums2 , nums1);

        int left = (n1 + n2 + 1) / 2;

        int l = 0 , h = n1;

        while(l <= h){
            int mid = (l + h) >> 1;
            int mid2 = left - mid;

            int l1,l2,r1,r2;
            l1 = l2 = INT_MIN;
            r1 = r2 = INT_MAX;

            if(mid < n1) r1 = nums1[mid];
            if(mid2 < n2) r2 = nums2[mid2];
            if(mid - 1 >= 0) l1 = nums1[mid-1];
            if(mid2 - 1 >= 0) l2 = nums2[mid2-1];

            if(l1 <= r2 && l2 <= r1){
                if((n1+n2) % 2 == 1) return (double) max(l1,l2);
                return (double) (max(l1,l2) + min(r1,r2))/2.0;
            }else if(l1 > r2){
                h = mid - 1;
            }else{
                l = mid + 1;
            }

        }
        return 0.0;
    }
};

int main() {
    Solution sol;

    // Test Case 1: Odd total length
    vector<int> nums1_a = {1, 3};
    vector<int> nums2_a = {2};
    // Combined: [1, 2, 3] -> Median = 2.0
    cout << "Test Case 1: " << sol.findMedianSortedArrays(nums1_a, nums2_a) << " (Expected: 2.0)" << endl;

    // Test Case 2: Even total length
    vector<int> nums1_b = {1, 2};
    vector<int> nums2_b = {3, 4};
    // Combined: [1, 2, 3, 4] -> Median = (2 + 3) / 2.0 = 2.5
    cout << "Test Case 2: " << sol.findMedianSortedArrays(nums1_b, nums2_b) << " (Expected: 2.5)" << endl;

    return 0;
}