#include <iostream>
#include <string>
#include <vector>
#include <sstream>

using namespace std;

class Solution {
public:
    string sortSentence(string s) {
        int n = s.size();
        string res = "";
        vector<string> ans(9 , "");
        for(int i = 0 ; i < n ; i++){
            char ch = s[i];
            string word = "";
            while(i < n && ch != ' '){
                word += ch;
                i++;
                ch = s[i];
            }
            int idx = word.back() - '1';
            ans[idx] = word.substr(0,word.size() - 1);
        }

        for(int i = 0 ; i < 9 ; i++){
            if(!ans[i].empty()){
                res += ans[i] + " ";
            }
        }
        if(!res.empty()) res.pop_back();

        return res;
    }
};

int main() {
    Solution sol;

    // Test Case 1
    string s1 = "is2 sentence4 This1 a3";
    cout << "Test Case 1 Output: \"" << sol.sortSentence(s1) 
         << "\" (Expected: \"This is a sentence\")" << endl;

    // Test Case 2
    string s2 = "Myself22 Me1 I4 and3"; // Handles edge case ordering
    string s3 = "Myself2 Me1 I4 and3";
    cout << "Test Case 2 Output: \"" << sol.sortSentence(s3) 
         << "\" (Expected: \"Me Myself and I\")" << endl;

    return 0;
}