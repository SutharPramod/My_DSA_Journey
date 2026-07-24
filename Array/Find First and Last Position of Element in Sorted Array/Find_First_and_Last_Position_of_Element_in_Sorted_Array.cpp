#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int fun(vector<int>& nums, int target,bool f){
        int st = 0 , end = nums.size() - 1, b = -1;
        while(st <= end){
            int mid = st + (end - st)/2;
            
            if(nums[mid] == target){
                b = mid;
                if(f){
                    end = mid - 1;
                }
                else{
                    st = mid + 1;
                }
            }
            else if(nums[mid] > target){
                end = mid - 1;
            }
            else{
                st = mid + 1;
            }
        }
        return b;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        return {fun(nums,target,true),fun(nums,target,false)};
    }
};
/**
 * Helper function to print a vector.
 */
void printVector(const vector<int>& v) {
    cout << "[" << v[0] << ", " << v[1] << "]" << endl;
}

int main() {
    Solution sol;

    // Test Case 1: Target exists multiple times
    vector<int> nums1 = {5, 7, 7, 8, 8, 10};
    int target1 = 8;
    // Expected Output: [3, 4]

    // Test Case 2: Target does not exist
    vector<int> nums2 = {5, 7, 7, 8, 8, 10};
    int target2 = 6;
    // Expected Output: [-1, -1]

    cout << "Test Case 1: "; printVector(sol.searchRange(nums1, target1));
    cout << "Test Case 2: "; printVector(sol.searchRange(nums2, target2));

    return 0;
}