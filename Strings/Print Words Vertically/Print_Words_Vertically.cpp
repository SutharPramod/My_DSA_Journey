#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <algorithm>

using namespace std;

class Solution {
public:
    vector<string> printVertically(string s) {
        stringstream ss(s);
        string word;
        vector<string> words;
        int maxLength = 0;
        
        while (ss >> word) {
            words.push_back(word);
            maxLength = max(maxLength, (int)word.length());
        }
        
        vector<string> result(maxLength, "");
        for (int i = 0; i < maxLength; ++i) {
            for (int j = 0; j < words.size(); ++j) {
                if (i < words[j].length()) {
                    result[i] += words[j][i];
                } else {
                    result[i] += " ";
                }
            }
            // Remove trailing spaces
            while (!result[i].empty() && result[i].back() == ' ') {
                result[i].pop_back();
            }
        }
        
        return result;
    }
};

int main() {
    Solution sol;
    
    // Test Case 1
    string s1 = "HOW ARE YOU";
    vector<string> res1 = sol.printVertically(s1);
    cout << "Test Case 1 Output:\n";
    for (const string& str : res1) {
        cout << "\"" << str << "\"" << endl;
    }
    
    // Test Case 2
    string s2 = "TO BE OR NOT TO BE";
    vector<string> res2 = sol.printVertically(s2);
    cout << "\nTest Case 2 Output:\n";
    for (const string& str : res2) {
        cout << "\"" << str << "\"" << endl;
    }
    
    return 0;
}