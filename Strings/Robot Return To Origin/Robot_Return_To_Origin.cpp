#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
    bool judgeCircle(string moves) {
        int idx1 = 0;
        int idx2 = 0;

        for(char ch : moves){
            if(ch == 'U'){
                idx1--;
            }
            else if(ch == 'D'){
                idx1++;
            }
            else if(ch == 'L'){
                idx2--;
            }
            else{
                idx2++;
            }
        }

        if(idx1 == 0 && idx2 == 0) return true;

        return false;
    }
};

int main() {
    Solution solution;
    
    // Test Case 1
    string moves1 = "UD";
    cout << "Test Case 1: " << (solution.judgeCircle(moves1) ? "true" : "false") << " (Expected: true)" << endl;
    
    // Test Case 2
    string moves2 = "LL";
    cout << "Test Case 2: " << (solution.judgeCircle(moves2) ? "true" : "false") << " (Expected: false)" << endl;
    
    return 0;
}