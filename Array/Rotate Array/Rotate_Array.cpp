#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    void r(vector<int>& nums, int s, int e){
        while(s < e){
            int temp = nums[s] ;
            nums[s] = nums[e] ;
            nums[e] = temp;
            s++;e--;
        }
    }
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        if(n < k) k = k % n;
        if(k==0) return;
        r(nums,0,n-1);
        r(nums,0,k-1);
        r(nums,k,n-1);
    }
};

/**
 * Helper function to print a vector.
 */
void printVector(const vector<int>& v) {
    cout << "[";
    for (size_t i = 0; i < v.size(); ++i) {
        cout << v[i] << (i == v.size() - 1 ? "" : ", ");
    }
    cout << "]" << endl;
}

int main() {
    Solution sol;

    // Test Case: [1, 2, 3, 4, 5, 6, 7], k = 3
    // Reverse all:    [7, 6, 5, 4, 3, 2, 1]
    // Reverse first 3: [5, 6, 7, 4, 3, 2, 1]
    // Reverse last 4:  [5, 6, 7, 1, 2, 3, 4]
    vector<int> nums = {1, 2, 3, 4, 5, 6, 7};
    int k = 3;

    cout << "Original Array: "; printVector(nums);
    sol.rotate(nums, k);
    cout << "Rotated Array:  "; printVector(nums); // Expected: [5, 6, 7, 1, 2, 3, 4]

    return 0;
}