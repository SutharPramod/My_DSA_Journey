#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Solution {
public:
    bool canReach(string s, int minJump, int maxJump) {
        int n = s.size();
        if (s[n - 1] == '1')
            return false;
        int rc = 0;
        s[0] = '2';

        for (int i = 1; i < n; i++) {

            if (i >= minJump) {
                if (s[i - minJump] == '2') {
                    rc++;
                }
            }

            if (i > maxJump) {
                if (s[i - maxJump - 1] == '2') {
                    rc--;
                }
            }

            if (s[i] == '0' && rc > 0) {
                s[i] = '2';
            }
        }
        return s[n - 1] == '2';
    }
};

int main() {
    Solution sol;
    
    string s1 = "011010";
    int minJump1 = 2, maxJump1 = 3;
    cout << "Test 1: " << (sol.canReach(s1, minJump1, maxJump1) ? "true" : "false") << endl;
    
    string s2 = "011110";
    int minJump2 = 2, maxJump2 = 3;
    cout << "Test 2: " << (sol.canReach(s2, minJump2, maxJump2) ? "true" : "false") << endl;
    
    return 0;
}