#include <iostream>

using namespace std;

class Solution {
  public:
    int NthTermOfGP(int a, int r, int n) {
        int MOD = 1e9 + 7;
        long long res = 1;
        while(n > 1){
            res = res * r % MOD;
            n--;
        }
        long long ans = a * res % MOD;
        int an = (int) ans;
        return an;
    }
};

int main() {
    Solution sol;

    // Test Case 1: a = 2, r = 2, n = 4
    cout << "Test Case 1: " << sol.NthTermOfGP(2, 2, 4) << " (Expected: 16)" << endl;

    // Test Case 2: a = 4, r = 3, n = 3
    cout << "Test Case 2: " << sol.NthTermOfGP(4, 3, 3) << " (Expected: 36)" << endl;

    // Test Case 3: Large n
    cout << "Test Case 3: " << sol.NthTermOfGP(5, 4, 100) << " (Modulo 10^9+7)" << endl;

    return 0;
}