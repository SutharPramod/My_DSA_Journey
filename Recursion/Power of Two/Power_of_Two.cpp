#include <iostream>

using namespace std;

class Solution {
public:
    bool isPowerOfTwo(int n) {
        if (n <= 0) {
            return false;
        }
        return (n & (n - 1)) == 0;
    }
};

int main() {
    Solution solution;
    
    int test1 = 1;
    int test2 = 16;
    int test3 = 3;
    
    cout << boolalpha;
    cout << "Is " << test1 << " a power of two? " << solution.isPowerOfTwo(test1) << endl;
    cout << "Is " << test2 << " a power of two? " << solution.isPowerOfTwo(test2) << endl;
    cout << "Is " << test3 << " a power of two? " << solution.isPowerOfTwo(test3) << endl;
    
    return 0;
}