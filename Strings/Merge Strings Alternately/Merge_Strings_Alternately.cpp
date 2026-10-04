#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int i = 0 , j = 0;
        int n = word1.size() , m = word2.size();
        string res;
        res.reserve(n+m);
        while(i < n || j < m){
            if(i < n) res.push_back(word1[i++]);
            if(j < m) res.push_back(word2[j++]);
        }
        
        return res;
    }
};

int main() {
    Solution solution;
    
    // Test Case 1
    string word1 = "abc";
    string word2 = "pqr";
    cout << "Test 1 - Input: word1 = \"" << word1 << "\", word2 = \"" << word2 << "\"" << endl;
    cout << "Output: \"" << solution.mergeAlternately(word1, word2) << "\"" << endl;
    cout << "Expected: \"apbqcr\"" << endl << endl;
    
    // Test Case 2
    word1 = "ab";
    word2 = "pqrs";
    cout << "Test 2 - Input: word1 = \"" << word1 << "\", word2 = \"" << word2 << "\"" << endl;
    cout << "Output: \"" << solution.mergeAlternately(word1, word2) << "\"" << endl;
    cout << "Expected: \"apbqrs\"" << endl;
    
    return 0;
}