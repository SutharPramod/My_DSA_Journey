#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    long intToBinaryLong(long num) {
        long count = 0;

        while (num > 0) {
            count += (num & 1);
            num >>= 1;
        }

        return count;
    }
    vector<int> sortByBits(vector<int>& arr) { 
        vector<pair<long, int>> bits; 
        for(int x : arr){
            long b = intToBinaryLong(x);
            bits.push_back({b, x});
        }

        sort(bits.begin(), bits.end());
        
        vector<int> result;
        for(auto& p : bits) {
            result.push_back(p.second);
        }
        
        return result;
    }
};

int main() {
    Solution sol;

    // Test Case 1
    vector<int> arr1 = {0, 1, 2, 3, 4, 5, 6, 7, 8};
    sol.sortByBits(arr1);
    cout << "Test Case 1 Output: [ ";
    for (int x : arr1) cout << x << " ";
    cout << "]\n(Expected: [0, 1, 2, 4, 8, 3, 5, 6, 7])\n" << endl;

    // Test Case 2
    vector<int> arr2 = {1024, 512, 256, 128, 64, 32, 16, 8, 4, 2, 1};
    sol.sortByBits(arr2);
    cout << "Test Case 2 Output: [ ";
    for (int x : arr2) cout << x << " ";
    cout << "]\n(Expected: [1, 2, 4, 8, 16, 32, 64, 128, 256, 512, 1024])\n" << endl;

    return 0;
}