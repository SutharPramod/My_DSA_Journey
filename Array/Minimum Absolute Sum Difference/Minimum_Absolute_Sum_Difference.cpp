#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;

class Solution {
public:
    int minAbsoluteSumDiff(vector<int>& nums1, vector<int>& nums2) {
        vector<int> so = nums1;
        sort(so.begin(), so.end());

        int n = so.size();
        long long ts = 0;
        long long mg = 0;
        for (int i = 0; i < n; i++) {
            long long d = abs(nums1[i] - nums2[i]);
            ts += d;

            if (d > mg) {
                int s = 0, e = n - 1, idx = -1;
                while (s <= e) {
                    int m = s + (e - s) / 2;
                    if (so[m] >= nums2[i]) {
                        e = m - 1;
                        idx = m;
                    } else {
                        s = m + 1;
                    }
                }

                if (idx != -1) {
                    long long nd = abs(so[idx] - nums2[i]);
                    mg = max(mg, d - nd);
                }
                if (idx != -1 && idx != 0) {
                    long long nd = abs(so[idx - 1] - nums2[i]);
                    mg = max(mg, d - nd);
                }
                if (idx == -1) {
                    long long nd = abs(so[n - 1] - nums2[i]);
                    mg = max(mg, d - nd);
                }
            }
        }
        int mod = 1e9 + 7;
        return (ts - mg) % mod;
    }
};

int main() {
    Solution sol;

    // Test Case 1
    vector<int> nums1_a = {1, 7, 5};
    vector<int> nums2_a = {2, 3, 5};
    // Expected: 3 (Replace 1 with 3 or 7 with 3 -> |3-2| + |3-3| + |5-5| = 1 + 0 + 0 = 1... wait, replace 1 with 3 is not allowed.
    // Replace 1 with 5: |5-2| + |7-3| + |5-5| = 3 + 4 + 0 = 7
    // Replace 7 with 1: |1-2| + |1-3| + |5-5| = 1 + 2 + 0 = 3)
    cout << "Test Case 1: " << sol.minAbsoluteSumDiff(nums1_a, nums2_a) << " (Expected: 3)" << endl;

    // Test Case 2
    vector<int> nums1_b = {2, 4, 6, 8, 10};
    vector<int> nums2_b = {2, 4, 6, 8, 10};
    // Expected: 0
    cout << "Test Case 2: " << sol.minAbsoluteSumDiff(nums1_b, nums2_b) << " (Expected: 0)" << endl;

    return 0;
}