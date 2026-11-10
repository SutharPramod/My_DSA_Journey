#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution
{
public:
    long long mypow(long long base, long long exp, int mod)
    {
        base %= mod;
        long long res = 1;
        while (exp > 0)
        {
            if (exp & 1)
                res = (res * base) % mod;
            base = (base * base) % mod;
            exp = exp >> 1;
        }
        return res;
    }
    int minNonZeroProduct(int p)
    {
        if (p == 1)
            return 1;
        const int mod = 1e9 + 7;
        long long ans = 0;

        long long range = ((1LL << p) - 1) % mod;
        long long lowrange = range - 1;
        long long exp = ((1LL << (p - 1)) - 1);
        long long res = mypow(lowrange, exp, mod);
        ans = (range * res) % mod;

        return ans;
    }
};

int main()
{
    Solution sol;

    // Test Case 1
    int p1 = 1;
    cout << "Test Case 1: p = " << p1 << " -> Output: " << sol.minNonZeroProduct(p1) << endl;

    // Test Case 2
    int p2 = 2;
    cout << "Test Case 2: p = " << p2 << " -> Output: " << sol.minNonZeroProduct(p2) << endl;

    // Test Case 3
    int p3 = 3;
    cout << "Test Case 3: p = " << p3 << " -> Output: " << sol.minNonZeroProduct(p3) << endl;

    return 0;
}