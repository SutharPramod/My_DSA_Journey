#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    int loga(int n) {
        if (n == 0)
            return 0;
        int ans = 0;
        while (n > 0) {
            ans++;
            n /= 2;
        }
        return ans;
    }
    vector<string> largestString(vector<int>& nums) {
        vector<string> res;
        for (int x : nums) {
            string s = "";
            while (x > 0) {
                if (x == 1) {
                    s += 'a';
                    break;
                }
                if (x == 2) {
                    s += 'b';
                    break;
                }

                int logi = loga(x);

                if (logi >= 27) {
                    s += 'z';
                    x -= (1 << 25);
                } else {
                    s += (char)logi + 96;
                    x -= (1 << (logi - 1));
                }
            }
            res.push_back(s);
        }
        return res;
    }
};

int main() {
    Solution sol;
    
    // Test Case 1
    vector<int> tc1 = {2,5,7};
    cout << endl;
    cout << "Input: " << endl;
    for(int x : tc1) 
    cout << x << " ";
    cout << endl;
    cout << "Output: " << endl;
    vector<string> res = sol.largestString(tc1);
    for(string &s : res) cout << s << endl;
    
    // Test Case 2
    cout << endl;
    tc1 = {3,9,1};
    cout << "Input: " << endl;
    for(int x : tc1) cout << x << " ";
    cout << endl;
    cout << "Output: " << endl;
    res = sol.largestString(tc1);
    for(string &s : res) cout << s << endl;
    
    return 0;
}