#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

class Solution {
public:
    int maxRepeating(string sequence, string word) {
        string temp = word;
        int k = 0;
        while (sequence.find(temp) != -1) {
            k++;
            temp += word;
        }
        return k;
    }
};

int main() {
    Solution solution;
    
    // Test Case 1
    string sequence1 = "ababc";
    string word1 = "ab";
    cout << "Test 1 - Max Repeating: " << solution.maxRepeating(sequence1, word1) << endl; // Expected: 2

    // Test Case 2
    string sequence2 = "ababc";
    string word2 = "ba";
    cout << "Test 2 - Max Repeating: " << solution.maxRepeating(sequence2, word2) << endl; // Expected: 1

    // Test Case 3
    string sequence3 = "ababc";
    string word3 = "ac";
    cout << "Test 3 - Max Repeating: " << solution.maxRepeating(sequence3, word3) << endl; // Expected: 0

    return 0;
}