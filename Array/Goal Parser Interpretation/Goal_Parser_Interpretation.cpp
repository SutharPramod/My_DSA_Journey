#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
    string interpret(string command) {
        string ans = "";
        int n = command.size();
        for(int i = 0 ; i < n ; i++){
            if(command[i] == 'G') ans += 'G';
            else if(command[i] == '(' && command[i+1] == ')'){
                ans += 'o';
                i++;
            }else if(command[i] == '(' && command[i+1] == 'a'){
                ans += "al";
                i += 3;
            }
        }
        return ans;
    }
};

int main() {
    Solution sol;

    // Test Case 1
    string cmd1 = "G()()()>(al)";
    cout << "Test Case 1 Output: \"" << sol.interpret("G()()()(al)") 
         << "\" (Expected: \"Goooal\")" << endl;

    // Test Case 2
    string cmd2 = "G()()() (al)";
    cout << "Test Case 2 Output: \"" << sol.interpret("G()()()al") 
         << "\" (Expected: \"Goooal\")" << endl;

    // Test Case 3
    string cmd3 = "(al)G(al) intuition ()G";
    cout << "Test Case 3 Output: \"" << sol.interpret("(al)G(al)()G") 
         << "\" (Expected: \"alGalogG\")" << endl;

    return 0;
}