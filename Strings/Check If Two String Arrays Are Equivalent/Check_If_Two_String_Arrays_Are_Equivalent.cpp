#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        if(word1[0][0] != word2[0][0]) return false;
        string s1 = "";
        string s2 = "";

        for(string s : word1){
            s1 += s;
        }

        for(string s : word2){
            s2 += s;
        }

        return s1 == s2;
    }
};

int main() {
    Solution sol;

    // Test Case 1
    std::vector<std::string> word1 = {"ab", "c"};
    std::vector<std::string> word2 = {"a", "bc"};
    bool result1 = sol.arrayStringsAreEqual(word1, word2);
    std::cout << "Test Case 1: " << (result1 ? "true" : "false") << " (Expected: true)" << std::endl;

    // Test Case 2
    std::vector<std::string> word3 = {"a", "cb"};
    std::vector<std::string> word4 = {"ab", "c"};
    bool result2 = sol.arrayStringsAreEqual(word3, word4);
    std::cout << "Test Case 2: " << (result2 ? "true" : "false") << " (Expected: false)" << std::endl;

    return 0;
}