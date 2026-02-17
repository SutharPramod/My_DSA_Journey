#include<iostream>
#include<vector>

using namespace std;

bool isPossible(vector<vector<char>>& board,int row,int col,int n,char dig){
    for(int i = 0 ; i < n ; i++){
        //vertical
        if(board[i][col] == dig) return false;
        //horizontal
        if(board[row][i] == dig) return false;
        //its owm square
        if(board[3 * (row/3) + i / 3][3 * (col/3) + i % 3] == dig) return false;
    }
    return true;
}
bool solve(vector<vector<char>>& board,int row,int col,int n){
    if(row == n){
        return true;
    }

    int nextrow = row , nextcol = col + 1;
    if(nextcol == 9) {nextrow = row + 1;nextcol = 0;}

    if(board[row][col] != '.'){
        return solve(board,nextrow,nextcol,n);
    }

    for(char i = '1' ; i <= '9' ; i++){
        if(isPossible(board,row,col,n,i)){
            board[row][col] = i;
            if (solve(board,nextrow,nextcol,n)) return true;
            board[row][col] = '.';
        }
    }
    return false;
}

void solveSudoku(vector<vector<char>>& board) {
    solve(board,0,0,board.size());
}

int main(){
    vector<vector<char>> board = {
{'5','3','.','.','7','.','.','.','.'},
{'6','.','.','1','9','5','.','.','.'},
{'.','9','8','.','.','.','.','6','.'},
{'8','.','.','.','6','.','.','.','3'},
{'4','.','.','8','.','3','.','.','1'},
{'7','.','.','.','2','.','.','.','6'},
{'.','6','.','.','.','.','2','8','.'},
{'.','.','.','4','1','9','.','.','5'},
{'.','.','.','.','8','.','.','7','9'}
};

solveSudoku(board);

for(auto i : board){
    for(auto j : i){
        cout << j << " ";
    }
    cout << endl;
}
    return 0;
}