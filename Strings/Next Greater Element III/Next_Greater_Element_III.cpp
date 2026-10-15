#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

class Solution {
public:
    int nextGreaterElement(int n) {
        int t = n;
        vector<int> res;
        while (t > 0) {
            res.push_back(t % 10);
            t /= 10;
        }
        reverse(res.begin(), res.end());
        if(!next_permutation(res.begin(), res.end())) return -1;
        long long n2 = 0;
        long long id = 1;
        for(int i = 1 ; i < res.size() ; i++) id *= 10;
        for (int x : res) {
            n2 += (long long) (x * id);
            id /= 10;
        }
        if (n2 > 2147483647)
            return -1;
        
        return n2;
    }
};

int main() {
    Solution sol;
    
    int test1 = 12;
    cout << "Input: " << test1 << ", Output: " << sol.nextGreaterElement(test1) << endl;
    
    int test2 = 21;
    cout << "Input: " << test2 << ", Output: " << sol.nextGreaterElement(test2) << endl;

    int test3 = 1234;
    cout << "Input: " << test3 << ", Output: " << sol.nextGreaterElement(test3) << endl;

    return 0;
}