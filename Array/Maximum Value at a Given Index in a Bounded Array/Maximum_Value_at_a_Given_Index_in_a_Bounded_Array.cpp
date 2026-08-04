#include <iostream>
#include <algorithm>

using namespace std;

class Solution {
public:
    int maxValue(int n, int index, int maxSum) {
        int R = n - index - 1;
        int L = index;

        int l , h;
        l = 1 , h = maxSum;
        int ans = -1;

        while(l <= h){
            int m = l + (h-l)/2;

            long long el = m - 1;
            long long sum = el * (el+1) /2;

            long long rsum , lsum;
            rsum = lsum = 0;
            if(R <= el){
                rsum = sum - (el - R) * (el - R + 1) / 2;
            }
            else{
                rsum = sum + (R - el);
            }

            if(L <= el){
                lsum = sum - (el - L) * (el - L + 1) / 2;
            }
            else{
                lsum = sum + (L - el);
            }

            long long tsum = rsum + lsum + m;
            if(tsum <= maxSum){
                l = m + 1;
                ans = m;
            }
            else{
                h = m - 1;
            }
        }
        return ans;
    }
};

int main() {
    Solution sol;

    // Test Case 1
    int n1 = 4, index1 = 2, maxSum1 = 6;
    // Expected: 2 (Array could be [1, 1, 2, 1], sum = 5 <= 6)
    cout << "Test Case 1: " << sol.maxValue(n1, index1, maxSum1) << " (Expected: 2)" << endl;

    // Test Case 2
    int n2 = 6, index2 = 1, maxSum2 = 10;
    // Expected: 3 (Array could be [2, 3, 2, 1, 1, 1], sum = 10 <= 10)
    cout << "Test Case 2: " << sol.maxValue(n2, index2, maxSum2) << " (Expected: 3)" << endl;

    return 0;
}