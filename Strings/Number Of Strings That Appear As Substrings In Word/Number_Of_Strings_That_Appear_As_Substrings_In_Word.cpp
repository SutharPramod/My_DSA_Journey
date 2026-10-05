#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

class Solution {
public:
    int numOfStrings(vector<string>& patterns, string word) {
        int cnt = 0;
        int s = word.size();
        for(string& str : patterns){
            if(s < str.size()) continue;
            if(word.find(str) != -1){
                cnt++;
            }
        }
        return cnt;
    }
};

int main() {
    Solution solution;

    // Test Case 1
    vector<string> patterns1 = {"a", "abc", "bc", "d"};
    string word1 = "abc";
    cout << "Test 1 Output: " << solution.numOfStrings(patterns1, word1) << " (Expected: 3)" << endl;

    // Test Case 2
    vector<string> patterns2 = {"a", "b", "c"};
    string word2 = "aaaaaa";
    cout << "Test 2 Output: " << solution.numOfStrings(patterns2, word2) << " (Expected: 1)" << endl;

    // Test Case 3
    vector<string> patterns3 = {"cc", "cb", "cc"};
    string word3 = "ac";
    cout << "Test 3 Output: " << solution.numOfStrings(patterns3, word3) << " (Expected: 0)" << endl;

    return 0;
}