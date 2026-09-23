#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
    bool check(string &s , int i , int j){
        while(i < j){
            if(s[i] != s[j]){
                return false;
            }
            i++;
            j--;
        }
        return true;
    }
    bool validPalindrome(string s) {
        int  i = 0 , j = s.size() - 1;
        while(i < j){
            if(s[i] != s[j]){
                return check(s , i + 1 , j) || check(s , i , j - 1);
            }
            i++;
            j--;
        }
        return true;
    }
};

int main() {
    Solution solution;
    
    string s1 = "aba";
    cout << "Input: " << s1 << " | Output: " << (solution.validPalindrome(s1) ? "true" : "false") << endl;

    string s2 = "abca";
    cout << "Input: " << s2 << " | Output: " << (solution.validPalindrome(s2) ? "true" : "false") << endl;

    string s3 = "abc";
    cout << "Input: " << s3 << " | Output: " << (solution.validPalindrome(s3) ? "true" : "false") << endl;

    return 0;
}