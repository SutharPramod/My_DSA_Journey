#include <iostream>
#include <vector>

using namespace std;

class Solution
{
public:
    void dfs(int i, int j, vector<vector<char>> &board, int n, int m)
    {
        if (i < 0 || j < 0 || i >= n || j >= m || board[i][j] != 'O')
            return;

        board[i][j] = '#';

        dfs(i + 1, j, board, n, m);
        dfs(i - 1, j, board, n, m);
        dfs(i, j + 1, board, n, m);
        dfs(i, j - 1, board, n, m);
    }
    void solve(vector<vector<char>> &board)
    {
        if (board.empty())
            return;
        int n = board.size();
        int m = board[0].size();

        // first row
        for (int i = 0; i < m; i++)
        {
            if (board[0][i] == 'O')
            {
                dfs(0, i, board, n, m);
            }
        }

        // last row
        for (int i = 0; i < m; i++)
        {
            if (board[n - 1][i] == 'O')
            {
                dfs(n - 1, i, board, n, m);
            }
        }

        // first column
        for (int i = 0; i < n; i++)
        {
            if (board[i][0] == 'O')
            {
                dfs(i, 0, board, n, m);
            }
        }

        // last column
        for (int i = 0; i < n; i++)
        {
            if (board[i][m - 1] == 'O')
            {
                dfs(i, m - 1, board, n, m);
            }
        }

        for(int i = 0 ; i< n ;i ++){
            for(int j = 0 ; j < m ; j++){
                if(board[i][j] == '#') board[i][j] = 'O';
                else board[i][j] = 'X';
            }
        }
    }
};

void printBoard(const vector<vector<char>> &board)
{
    for (const auto &row : board)
    {
        for (char cell : row)
        {
            cout << cell << " ";
        }
        cout << endl;
    }
}

int main()
{
    Solution sol;

    // Test Case: Middle 'O' is surrounded, but bottom-left 'O' is not.
    vector<vector<char>> board = {
        {'X', 'X', 'X', 'X'},
        {'X', 'O', 'O', 'X'},
        {'X', 'X', 'O', 'X'},
        {'X', 'O', 'X', 'X'}};

    /*
       Initial Board:       Expected Result:
       X X X X              X X X X
       X O O X      ->      X X X X
       X X O X              X X X X
       X O X X              X O X X  (Border 'O' saved the region)
    */

    cout << "Original Board:" << endl;
    printBoard(board);

    sol.solve(board);

    cout << "\nAfter Solving (Captured Regions):" << endl;
    printBoard(board);

    return 0;
}