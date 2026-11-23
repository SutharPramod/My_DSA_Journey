#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

class Solution {
public:
    int repeatedStringMatch(string a, string b) {
        int n1 = a.size() , n2 = b.size();

        int minr = n2 / n1 + 1;
        string t = "";
        for(int i = 1 ; i <= minr + 1 ; i++){
            t += a;
            if(t.find(b) != -1) return i;
        }
        return -1;
    }
};

int main() {
    Solution sol;
    
    // Test case 1
    string a1 = "abcd";
    string b1 = "cdabcdab";
    cout << "Test 1 Output: " << sol.repeatedStringMatch(a1, b1) << endl; // Expected: 3
    
    // Test case 2
    string a2 = "a";
    string b2 = "aa";
    cout << "Test 2 Output: " << sol.repeatedStringMatch(a2, b2) << endl; // Expected: 2
    
    return 0;
}