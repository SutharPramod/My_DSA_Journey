#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int n = nums.size();
        int closestsum = nums[0] + nums[1] + nums[2];
        for(int i = 0 ; i < n - 2 ; i++){
            int s = i + 1 , e = n - 1;

            while(s < e){
                int sum = nums[i] + nums[s] + nums[e];

                if(closestsum == target){
                    return closestsum;
                }
                if(abs(sum - target) < abs(closestsum - target)){
                    closestsum = sum;
                }

                if(sum > target){
                    e--;
                }
                else{
                    s++;
                }
            }
        }
        return closestsum;
    }
};

int main() {
    Solution sol;

    // Test Case 1
    vector<int> nums1 = {-1, 2, 1, -4};
    int target1 = 1;
    cout << "Test Case 1: " << sol.threeSumClosest(nums1, target1)
         << " (Expected: 2)" << endl;

    // Test Case 2
    vector<int> nums2 = {0, 0, 0};
    int target2 = 1;
    cout << "Test Case 2: " << sol.threeSumClosest(nums2, target2)
         << " (Expected: 0)" << endl;

    return 0;
}