#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

class Solution {
public:
    char findKthBit(int n, int k) {
        // Base case: S_1 is always "0"
        if (n == 1) {
            return '0';
        }
        
        int length = (1 << n) - 1; // 2^n - 1
        int mid = length / 2 + 1; // 1-based middle index
        
        if (k == mid) {
            return '1';
        } else if (k < mid) {
            // The first half is identical to S_{n-1}
            return findKthBit(n - 1, k);
        } else {
            // The second half is the reverse inversion of S_{n-1}
            // Map the index k to its corresponding index in the first half
            int mirrored_k = length - k + 1;
            char bit = findKthBit(n - 1, mirrored_k);
            // Invert the bit ('0' becomes '1', '1' becomes '0')
            return (bit == '0') ? '1' : '0';
        }
    }
};

int main() {
    Solution solution;
    
    // Test Case 1
    int n1 = 3, k1 = 1;
    cout << "Input: n = " << n1 << ", k = " << k1 << endl;
    cout << "Output: " << solution.findKthBit(n1, k1) << endl;
    cout << "Expected: 0\n" << endl;
    
    // Test Case 2
    int n2 = 4, k2 = 11;
    cout << "Input: n = " << n2 << ", k = " << k2 << endl;
    cout << "Output: " << solution.findKthBit(n2, k2) << endl;
    cout << "Expected: 1\n" << endl;
    
    return 0;
}