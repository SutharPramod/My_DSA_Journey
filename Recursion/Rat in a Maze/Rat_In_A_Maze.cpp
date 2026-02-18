#include <iostream>
#include <vector>
using namespace std;

void pathfinder(vector<vector<int>>& maze, int r , int c , int n,vector<string> &ans,string path){
    if(r < 0 || c < 0 || c >= n || r >= n || maze[r][c] == 0) return;

    if(r == n-1 && c == n-1){
        ans.push_back(path);
        return;
    }

    maze[r][c] = 0;
    //down
    pathfinder(maze,r+1,c,n,ans,path+'D');
    //left
    pathfinder(maze,r,c-1,n,ans,path+'L');
    //right
    pathfinder(maze,r,c+1,n,ans,path+'R');
    //up
    pathfinder(maze,r-1,c,n,ans,path+'U');

    maze[r][c] = 1;
}

vector<string> ratInMaze(vector<vector<int>>& maze) {
    vector<string> ans;
    string path = "";
    pathfinder(maze,0,0,maze.size(),ans,path);
    return ans;
}

int main(){
    vector<vector<int>> maze = {
{1, 1, 1, 0, 1},
{1, 0, 1, 1, 1},
{0, 0, 1, 1, 1},
{1, 0, 0, 1, 1},
{1, 0, 0, 0, 1}
};

    vector<string> ans = ratInMaze(maze);

    for(auto path : ans)
        cout << path << endl;
    return 0;
}