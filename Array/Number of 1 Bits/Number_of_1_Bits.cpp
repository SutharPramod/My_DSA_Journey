#include <iostream>
#include <cstdint>

using namespace std;

class Solution {
public:
    
    int hammingWeight(uint32_t n) {
        int count = 0;
        
        while (n > 0) {
            n &= (n - 1);
            count++;
        }
        
        return count;
    }
};

int main() {
    Solution sol;

    // Test Case 1: n = 11 (binary 00000000000000000000000000001011)
    uint32_t n1 = 11;
    cout << "Test Case 1: " << sol.hammingWeight(n1) << " (Expected: 3)" << endl;

    // Test Case 2: n = 128 (binary 00000000000000000000000010000000)
    uint32_t n2 = 128;
    cout << "Test Case 2: " << sol.hammingWeight(n2) << " (Expected: 1)" << endl;

    // Built-in C++ alternative:
    // cout << __builtin_popcount(n1);

    return 0;
}