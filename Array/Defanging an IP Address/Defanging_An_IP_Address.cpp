#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
    string defangIPaddr(string address) {
        string ans = "";
        for(char x : address){
            if(x == '.'){
                ans += "[.]";
            }
            else{
                ans += x;
            }
        }
        return ans;
    }
};
int main() {
    Solution sol;

    // Test Case 1
    string addr1 = "1.1.1.1";
    cout << "Test Case 1 Output: \"" << sol.defangIPaddr(addr1) 
         << "\" (Expected: \"1[.]1[.]1[.]1\")" << endl;

    // Test Case 2
    string addr2 = "255.100.50.0";
    cout << "Test Case 2 Output: \"" << sol.defangIPaddr(addr2) 
         << "\" (Expected: \"255[.]100[.]50[.]0\")" << endl;

    return 0;
}