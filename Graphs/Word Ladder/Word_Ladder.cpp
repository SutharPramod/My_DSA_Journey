#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>
#include <queue>

using namespace std;

class Solution {
public:
    int ladderLength(string beginWord, string endWord, vector<string>& wordList) {
        int n = wordList.size();

        unordered_map <string,int> m;

        for(int i = 0 ; i < n ; i++){
            m[wordList[i]] = 1;
        }
        if(m.find(beginWord) == m.end()) {
            m[beginWord] = 1;
        }
        if(m.find(endWord) == m.end()) {
            return 0;
        }

        queue<pair<string,int>> q;
        q.push({beginWord , 1});
        m.erase(beginWord);

        while(q.size() > 0){
            string word = q.front().first;
            int val = q.front().second;
            q.pop();

            if(word == endWord) {
                return val;
            } 

            for(int i = 0; i<word.size() ; i++){
                char c = word[i];
                for(char j = 'a' ; j <= 'z' ; j++){
                    if(j == c) continue;
                    word[i] = j;

                    if(m.find(word) != m.end()){
                        q.push({word,val+1});
                        m.erase(word);
                    }
                }
                word[i] = c;
            }
        }
        return 0;
    }
};

int main() {
    Solution sol;

    // Test Case 1: Standard valid transformation
    // "hit" -> "hot" -> "dot" -> "dog" -> "cog" (5 words total)
    string beginWord1 = "hit";
    string endWord1 = "cog";
    vector<string> wordList1 = {"hot", "dot", "dog", "lot", "log", "cog"};

    // Test Case 2: Target word is missing from list
    string beginWord2 = "hit";
    string endWord2 = "cog";
    vector<string> wordList2 = {"hot", "dot", "dog", "lot", "log"};

    cout << "Test Case 1: " << sol.ladderLength(beginWord1, endWord1, wordList1) << " (Expected: 5)" << endl;
    cout << "Test Case 2: " << sol.ladderLength(beginWord2, endWord2, wordList2) << " (Expected: 0)" << endl;

    return 0;
}