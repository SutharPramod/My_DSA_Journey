#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

class Solution {
public:
    bool pal(string &str,int i ,int j){
        while(i < j){
            if(str[i] != str[j]) return false;
            i++;j--;
        }
        return true;
    }
    bool check(string &a , string &b){
        int i = 0 , j = a.size() - 1;

        while(i < j && a[i] == b[j]){
            i++;
            j--;
        }

        return pal(a , i , j) || pal(b , i , j);
    }
    bool checkPalindromeFormation(string a, string b) {
        return check(a , b) || check(b , a);
    }
};

int main() {
    Solution solution;
    
    // Test Case 1
    string a1 = "x";
    string b1 = "y";
    cout << "Test Case 1: " << (solution.checkPalindromeFormation(a1, b1) ? "true" : "false") << endl;

    // Test Case 2
    string a2 = "ulacfd";
    string b2 = "jizalu";
    cout << "Test Case 2: " << (solution.checkPalindromeFormation(a2, b2) ? "true" : "false") << endl;

    return 0;
}