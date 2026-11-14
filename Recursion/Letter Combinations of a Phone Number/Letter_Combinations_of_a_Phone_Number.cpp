#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

class Solution {
public:
    void dfs(string &digits , vector<string> &res , vector<string> &map , int index , string &curr , int &n){
        if(index == n){
            res.push_back(curr);
            return;
        }

        string letters = map[digits[index] - '0' - 2];

        for(char ch : letters){
            curr.push_back(ch);
            dfs(digits , res , map , index + 1 , curr , n);
            curr.pop_back();
        }
    }
    vector<string> letterCombinations(string digits) {
        vector<string> res;
        vector<string> map(8);
        map[0] = "abc";
        map[1] = "def";
        map[2] = "ghi";
        map[3] = "jkl";
        map[4] = "mno";
        map[5] = "pqrs";
        map[6] = "tuv";
        map[7] = "wxyz";

        int n = digits.size();
        string curr = "";
        dfs(digits , res , map , 0 , curr , n);
        return res;
    }
};

int main() {
    Solution sol;

    // Test Case 1
    string digits1 = "23";
    vector<string> ans1 = sol.letterCombinations(digits1);
    cout << "Test Case 1 (\"23\") Output: ";
    for (const string& s : ans1) {
        cout << s << " ";
    }
    cout << endl;

    // Test Case 2
    string digits2 = "";
    vector<string> ans2 = sol.letterCombinations(digits2);
    cout << "Test Case 2 (\"\") Output Count: " << ans2.size() << endl;

    // Test Case 3
    string digits3 = "2";
    vector<string> ans3 = sol.letterCombinations(digits3);
    cout << "Test Case 3 (\"2\") Output: ";
    for (const string& s : ans3) {
        cout << s << " ";
    }
    cout << endl;

    return 0;
}