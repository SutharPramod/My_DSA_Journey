#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) {
        int n = nums.size();

        int minv = nums[0] , maxv = nums[0];
        for(int i = 1 ; i < n ; i++){
            minv = min(minv , nums[i]);
            maxv = max(maxv , nums[i]);
        }

        int range = maxv - minv + 1;
        vector<int> count(range ,0);

        for(int x : nums) count[x - minv]++;

        int idx = 0;
        for(int i = 0 ; i < range ; i++){
            while(count[i] > 0){
                nums[idx++] = i + minv;
                count[i]--;
            }
        }

        int maxcnt = 0 , l = 0 ;
        long long total = 0;
        for(int r = 0 ; r < n ; r++){
            total += nums[r];

            while(((r - l + 1) * (long long)nums[r]) - total > k){
                total -= nums[l];
                l++;
            }

            maxcnt = max(maxcnt , r - l + 1);
        }
        return maxcnt;
    }
};

int main() {
    Solution sol;

    // Test Case 1
    vector<int> nums1 = {1, 2, 4};
    int k1 = 5;
    // Expected Output: 3 (Increment 1 three times -> 4, increment 2 two times -> 4. Array becomes [4, 4, 4])
    cout << "Test Case 1: " << sol.maxFrequency(nums1, k1) << " (Expected: 3)" << endl;

    // Test Case 2
    vector<int> nums2 = {1, 4, 8, 13};
    int k2 = 5;
    // Expected Output: 2
    cout << "Test Case 2: " << sol.maxFrequency(nums2, k2) << " (Expected: 2)" << endl;

    return 0;
}