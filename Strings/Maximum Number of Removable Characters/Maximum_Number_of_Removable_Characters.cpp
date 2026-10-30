#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

class Solution {
public:
    bool isvalid(string &a , string &b , vector<int>& removable , int m){
        vector<bool> vis(a.size(), false);

        for(int i = 0 ; i < m ; i++){
            vis[removable[i]] = true;
        }

        int j = 0;
        for(int i = 0 ; i < a.size() ; i++){
            if(vis[i]) continue;

            if(a[i] == b[j]) j++;

            if(j == b.size()) return true;
        }

        return false;
    }
    int maximumRemovals(string s, string p, vector<int>& removable) {
        int n = removable.size();
        int st = 0 , e = n;
        int ans = 0;
        while(st <= e){
            int m = st + (e-st)/2;

            if(isvalid(s , p , removable , m)){
                ans = m;
                st = m + 1;
            }
            else{
                e = m - 1;
            }
        }
        return ans;
    }
};

int main() {
    Solution sol;
    
    // Test Case 1
    string s1 = "abcacb";
    string p1 = "ab";
    vector<int> removable1 = {3, 1, 0};
    cout << "Test 1 Output: " << sol.maximumRemovals(s1, p1, removable1) << " (Expected: 2)" << endl;
    
    // Test Case 2
    string s2 = "abcbddddd";
    string p2 = "abcd";
    vector<int> removable2 = {3, 2, 1, 4, 5, 6};
    cout << "Test 2 Output: " << sol.maximumRemovals(s2, p2, removable2) << " (Expected: 1)" << endl;
    
    return 0;
}