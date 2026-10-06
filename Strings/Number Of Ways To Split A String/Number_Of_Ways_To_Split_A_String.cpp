#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Solution {
public:
    int numWays(string s) {
        int no1 = 0 ;
        int n = s.size();
        for(int i = 0 ; i < n ; i++){
            char ch = s[i];
            if(ch == '1') no1++;
        }

        if(no1 % 3 != 0) return false;

        const int Mod = 1e9 + 7;

        if(no1 == 0){
            return (1LL * (n - 1) * (n - 2))/2 % Mod; //combination formula
        }

        int cnt = 0, split = no1 / 3; 
        long long s1 = 0 , s2 = 0;

        for(int i = 0 ; i < n ; i++){
            char ch = s[i];
            if(ch == '1') cnt++;

            if(cnt == split) s1++;
            if(cnt == 2 * split) s2++;
        }

        return (s1 * s2) % Mod;
    }
};

int main() {
    Solution solution;
    
    // Test Case 1
    string s1 = "10101";
    cout << "Test 1 Output: " << solution.numWays(s1) << endl; // Expected: 4
    
    // Test Case 2
    string s2 = "1001010";
    cout << "Test 2 Output: " << solution.numWays(s2) << endl; // Expected: 3
    
    return 0;
}