#include <iostream>

using namespace std;

class Solution {
public:
    int arrangeCoins(int n) {
        if(n < 3) return 1;
        if(n == 3) return 2;
        long s = 0 , e = n/2;
        while(s <= e){
            long m = s + (e-s)/2;
            long sum = m*(m+1)/2;
            if(sum == n) return m;
            else if(sum > n) e = m - 1;
            else{
                s = m + 1;
            }
        }
        return e;
    }
};

int main() {
    Solution sol;
    
    // Test Case 1: n = 5
    // Row 1: 1 coin, Row 2: 2 coins, Row 3: 2 coins left (incomplete)
    // Expected Output: 2
    cout << "Coins = 5: " << sol.arrangeCoins(5) << " (Expected: 2)" << endl;

    // Test Case 2: n = 8
    // Row 1: 1, Row 2: 2, Row 3: 3, Row 4: 2 coins left (incomplete)
    // Expected Output: 3
    cout << "Coins = 8: " << sol.arrangeCoins(8) << " (Expected: 3)" << endl;

    return 0;
}