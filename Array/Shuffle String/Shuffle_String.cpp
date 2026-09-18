#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        int n = indices.size();
        string ans(n , ' ');
        int i = 0;
        for(int x : indices){
            ans[x] = s[i];
            i++;
        }
        return ans;
    }
};

int main() {
    Solution sol;

    // Test Case 1
    string s1 = "codeleet";
    vector<int> indices1 = {4, 5, 6, 7, 0, 2, 1, 3};
    cout << "Test Case 1 Output: \"" << sol.restoreString(s1, indices1) 
         << "\" (Expected: \"leetcode\")" << endl;

    // Test Case 2
    string s2 = "abc";
    vector<int> indices2 = {0, 1, 2};
    cout << "Test Case 2 Output: \"" << sol.restoreString(s2, indices2) 
         << "\" (Expected: \"abc\")" << endl;

    return 0;
}