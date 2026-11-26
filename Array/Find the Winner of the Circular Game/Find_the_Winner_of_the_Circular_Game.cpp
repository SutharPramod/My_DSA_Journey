#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

class Solution {
public:
    int findTheWinner(int n, int k) {
        if(n == 1) return 1;
        if(k == 1) return n;
        
        int survivor = 0;

        for(int i = 2 ; i <= n ; i++){
            survivor = (survivor + k) % i;
        }

        return survivor + 1;
    }
};

int main() {
    Solution sol;
    
    // Test Case 1
    int n1 = 5, k1 = 2;
    cout << "Winner for n = 5, k = 2 is: " << sol.findTheWinner(n1, k1) << " (Expected: 3)" << endl;
    
    // Test Case 2
    int n2 = 6, k2 = 5;
    cout << "Winner for n = 6, k = 5 is: " << sol.findTheWinner(n2, k2) << " (Expected: 1)" << endl;
    
    return 0;
}