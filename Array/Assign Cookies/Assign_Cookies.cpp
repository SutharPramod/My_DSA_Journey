#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        int res = 0 , n = g.size() , m = s.size() , i = 0 , j = 0;
        sort(g.begin(),g.end());
        sort(s.begin(),s.end());
        while(i < n && j < m){
            if(s[j] >= g[i]){
                res++;
                i++;
                j++;
            }
            else{
                j++;
            }
        }
        return res;
    }
};

int main() {
    Solution sol;

    // Test Case 1
    vector<int> g1 = {1, 2, 3};
    vector<int> s1 = {1, 1};
    // Expected Output: 1
    cout << "Test Case 1: " << sol.findContentChildren(g1, s1) << " (Expected: 1)" << endl;

    // Test Case 2
    vector<int> g2 = {1, 2};
    vector<int> s2 = {1, 2, 3};
    // Expected Output: 2
    cout << "Test Case 2: " << sol.findContentChildren(g2, s2) << " (Expected: 2)" << endl;

    return 0;
}