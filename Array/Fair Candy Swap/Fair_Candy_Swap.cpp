#include <iostream>
#include <vector>
#include <numeric>
#include <unordered_set>
#include <algorithm>

using namespace std;

class Solution {
public:
    vector<int> fairCandySwap(vector<int>& aliceSizes, vector<int>& bobSizes) {
        long long as = 0 , bs = 0;
        for(int x : aliceSizes) as+=x;
        for(int x : bobSizes) bs+=x;
        sort(aliceSizes.begin() , aliceSizes.end());
        sort(bobSizes.begin() , bobSizes.end());

        long long rd = (as - bs)/2;
        int i = 0 , j = 0;
        while(i < aliceSizes.size() && j < bobSizes.size()){
            long long d = aliceSizes[i] - bobSizes[j];
            if(d == rd) return {aliceSizes[i],bobSizes[j]};
            else if(d > rd) j++;
            else i++;
        }
        return {};
    }
};

int main() {
    Solution sol;

    // Test Case: Alice has [1, 2], Bob has [2, 3]
    // SumA = 3, SumB = 5. Delta = (5 - 3) / 2 = 1.
    // If Alice gives 1, Bob must give 1 + 1 = 2.
    // New allocations: Alice gets 2 (total 4), Bob gets 1 (total 4).
    vector<int> alice = {1, 2};
    vector<int> bob = {2, 3};

    vector<int> result = sol.fairCandySwap(alice, bob);
    cout << "Swap Configuration: [" << result[0] << ", " << result[1] << "] (Expected: [1, 2])" << endl;

    return 0;
}