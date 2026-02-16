#include<iostream>
#include<vector>
using namespace std;

bool isSafe(vector<string> &board , int row ,int col, int n){
    //vertical
    for(int i = 0 ; i < n ; i++){
        if(board[i][col] == 'Q') return false;
    }

    //left-diagonal
    int i = row , j = col;
    while(i >= 0 && j >= 0){
        if(board[i][j] == 'Q') return false;
        i--;
        j--;
    }

    //right-diagonal
    i = row , j = col;
    while(i >= 0 && j < n){
        if(board[i][j] == 'Q') return false;
        i--;
        j++;
    }

    return true;
}

void nqueens(vector<string> &board , int row , int n, vector<vector<string>> &ans){

    if(row == n){
        ans.push_back(board);
        return;
    }

    for(int j = 0 ; j < n ; j++){
        if(isSafe(board,row,j,n)){
            board[row][j] = 'Q';
            nqueens(board,row+1,n,ans);
            board[row][j] = '.';
        }
    }
}

vector<vector<string>> solveNQueens(int n) {
    vector<vector<string>> ans;
    vector<string> board(n,string(n,'.'));
    nqueens(board,0,n,ans);
    return ans;
}


int main(){
    vector<vector<string>> ans = solveNQueens(4);
    for(auto i : ans){
        cout << "Solution : " << endl;
        for(auto j : i)
            {cout << "[";
                for(auto k : j){
                    cout << k << "," ;
                }
                cout << "]" << endl;}
        cout << endl << endl;
    }
    return 0;
}