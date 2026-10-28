#include <iostream>
#include <vector>

using namespace std;

class NumArray {
private:
    vector<int> prefixSum;

public:
    NumArray(vector<int>& nums) {
        int n = nums.size();
        prefixSum.resize(n);
        prefixSum[0] = nums[0];
        for (int i = 1; i < n; i++) {
            prefixSum[i] = prefixSum[i - 1] + nums[i];
        }
    }
    
    int sumRange(int left, int right) {
        if(left == 0) return prefixSum[right];
        return prefixSum[right] - prefixSum[left - 1];
    }
};

int main() {
    // Test Case 1
    vector<int> nums1 = {-2, 0, 3, -5, 2, -1};
    NumArray* numArray1 = new NumArray(nums1);
    cout << "Test Case 1:" << endl;
    cout << "sumRange(0, 2): " << numArray1->sumRange(0, 2) << " (Expected: 1)" << endl;
    cout << "sumRange(2, 5): " << numArray1->sumRange(2, 5) << " (Expected: -1)" << endl;
    cout << "sumRange(0, 5): " << numArray1->sumRange(0, 5) << " (Expected: -3)" << endl;
    delete numArray1;

    // Test Case 2
    vector<int> nums2 = {1, 2, 3, 4, 5};
    NumArray* numArray2 = new NumArray(nums2);
    cout << "\nTest Case 2:" << endl;
    cout << "sumRange(0, 4): " << numArray2->sumRange(0, 4) << " (Expected: 15)" << endl;
    cout << "sumRange(1, 3): " << numArray2->sumRange(1, 3) << " (Expected: 9)" << endl;
    delete numArray2;

    return 0;
}