#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

class Solution {
public:
    bool dfs(vector<vector<char>>& board, string& word, int i, int j, int idx,
             int n, int m) {
        if (idx == word.size())
            return true;
        if (i < 0 || i >= n || j < 0 || j >= m || board[i][j] == '1') {
            return false;
        }

        if (word[idx] != board[i][j])
            return false;

        char temp = board[i][j];
        board[i][j] = '1';

        bool found = dfs(board, word, i + 1, j, idx + 1, n, m) ||
               dfs(board, word, i - 1, j, idx + 1, n, m) ||
               dfs(board, word, i, j - 1, idx + 1, n, m) ||
               dfs(board, word, i, j + 1, idx + 1, n, m);

        board[i][j] = temp;

        return found;
    }

    bool exist(vector<vector<char>>& board, string word) {
        int n = board.size(), m = board[0].size();

        if (word.size() > n * m)
            return false;

        vector<int> dict1(128, 0);
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                dict1[board[i][j]]++;
            }
        }

        vector<int> dict2(128, 0);

        for (char x : word) {
            dict2[x]++;
            if (dict2[x] > dict1[x])
                return false;
        }

        if (word[0] > word[word.back()])
            reverse(word.begin(), word.end());

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (board[i][j] == word[0]) {
                    if (dfs(board, word, i, j, 0, n, m))
                        return true;
                }
            }
        }

        return false;
    }
};

int main() {
    Solution solution;
    
    // Test Case 1
    vector<vector<char>> board1 = {
        {'A', 'B', 'C', 'E'},
        {'S', 'F', 'C', 'S'},
        {'A', 'D', 'E', 'E'}
    };
    string word1 = "ABCCED";
    cout << "Test Case 1: " << (solution.exist(board1, word1) ? "True" : "False") << endl;
    
    // Test Case 2
    vector<vector<char>> board2 = {
        {'A', 'B', 'C', 'E'},
        {'S', 'F', 'C', 'S'},
        {'A', 'D', 'E', 'E'}
    };
    string word2 = "ABCB";
    cout << "Test Case 2: " << (solution.exist(board2, word2) ? "True" : "False") << endl;
    
    return 0;
}