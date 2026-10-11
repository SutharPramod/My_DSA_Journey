#include <iostream>
#include <string>
#include <vector>
#include <sstream>

using namespace std;

class Solution {
public:
    vector<string> split(string s) {
        vector<string> words;
        string word;

        for (char c : s) {
            if (c == ' ') {
                words.push_back(word);
                word.clear();
            } else {
                word += c;
            }
        }

        words.push_back(word);

        return words;
    }

    bool areSentencesSimilar(string sentence1, string sentence2) {

        vector<string> a = split(sentence1);
        vector<string> b = split(sentence2);

        if (a.size() > b.size())
            swap(a, b);

        int n = a.size();
        int m = b.size();

        int i = 0;

        while (i < n && a[i] == b[i])
            i++;

        int j = 0;

        while (j < n - i &&
               a[n - 1 - j] == b[m - 1 - j])
            j++;

        return i + j == n;
    }
};

int main() {
    Solution solution;
    
    // Test Case 1
    string s1 = "My name is Haley";
    string s2 = "My Haley";
    bool result1 = solution.areSentencesSimilar(s1, s2);
    cout << "Test Case 1: " << (result1 ? "true" : "false") << endl;
    
    // Test Case 2
    string s3 = "of";
    string s4 = "A lot of words";
    bool result2 = solution.areSentencesSimilar(s3, s4);
    cout << "Test Case 2: " << (result2 ? "true" : "false") << endl;
    
    return 0;
}