#include <iostream>

using namespace std;

class Solution {
public:
    int subtractProductAndSum(int n) {
        int sum = 0,product = 1;
        while(n > 0){
            sum += n % 10;
            product *= n % 10;
            n /= 10;
        }
        return product-sum;
    }
};

int main() {
    Solution sol;

    // Test Case 1: n = 234
    // Product of digits = 2 * 3 * 4 = 24
    // Sum of digits = 2 + 3 + 4 = 9
    // Result = 24 - 9 = 15
    int n1 = 234;

    // Test Case 2: n = 4421
    // Product of digits = 4 * 4 * 2 * 1 = 32
    // Sum of digits = 4 + 4 + 2 + 1 = 11
    // Result = 32 - 11 = 21
    int n2 = 4421;

    cout << "Test Case 1 (n = " << n1 << "): " << sol.subtractProductAndSum(n1) << " (Expected: 15)" << endl;
    cout << "Test Case 2 (n = " << n2 << "): " << sol.subtractProductAndSum(n2) << " (Expected: 21)" << endl;

    return 0;
}