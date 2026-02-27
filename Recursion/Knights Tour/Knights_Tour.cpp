#include <iostream>
#include <vector>
using namespace std;

bool isValid(vector<vector<int>> &grid , int r , int c , int n , int val){
    if(r >= n  || r < 0 || c < 0 || c >=n || grid[r][c] != val) return false;
    if(grid[r][c] == n * n -1 ) return true;

    return isValid(grid,r-2,c-1,n,val+1) || 
    isValid(grid,r-1,c-2,n,val+1) || 
    isValid(grid,r+1,c-2,n,val+1) || 
    isValid(grid,r+2,c-1,n,val+1) || 
    isValid(grid,r+2,c+1,n,val+1) || 
    isValid(grid,r-1,c+2,n,val+1) || 
    isValid(grid,r+1,c+2,n,val+1) || 
    isValid(grid,r-2,c+1,n,val+1);
}

bool knightsTour(vector<vector<int>> &grid){
    return isValid(grid,0,0,grid.size(),0);
}

int main(){
    vector<vector<int>> grid = {{0,11,16,5,20},{17,4,19,10,15},{12,1,8,21,6},{3,18,23,14,9},{24,13,2,7,22}};
    cout << (knightsTour(grid) ? "True" : "False");
    return 0;
}