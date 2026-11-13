#include <iostream>

using namespace std;

class Solution {
public:
    long long mypow(long long base , long long exp , int mod){
        long long res = 1;
        base = base % mod;
        while(exp > 0){
            if(exp & 1) res = (res * base) % mod;
            base = (base * base) % mod;
            exp = exp >> 1;
        }

        return res;
    }
    int countGoodNumbers(long long n) {
        const int mod = 1e9 + 7;

        long long even, odd;

        if (n % 2 == 0) {
            even = (n / 2);
            odd = even;
        } else{
            even = (n / 2 + 1); 
            odd = even - 1;
        }

        int ans ;
        ans = (mypow(5 , even , mod) *  mypow(4 , odd , mod)) % mod;
        return ans;
    }
};

int main() {
    Solution sol;
    
    // Test Case 1
    long long n1 = 1;
    cout << "Input: n = " << n1 << endl;
    cout << "Output: " << sol.countGoodNumbers(n1) << endl; // Expected: 5

    // Test Case 2
    long long n2 = 4;
    cout << "Input: n = " << n2 << endl;
    cout << "Output: " << sol.countGoodNumbers(n2) << endl; // Expected: 400

    // Test Case 3
    long long n3 = 50;
    cout << "Input: n = " << n3 << endl;
    cout << "Output: " << sol.countGoodNumbers(n3) << endl; // Expected: 564908303

    return 0;
}