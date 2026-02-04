#include <iostream>
#include <vector>
#include <set>

using namespace std;

vector<int> findMissingAndRepeatedValues(vector<vector<int>> &grid){
    int n = grid.size();
    set<int> s;
    vector<int> ans;

    //repeating number
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < n ; j++){
            if(s.find(grid[i][j]) != s.end()){
                ans.push_back(grid[i][j]);
            }
            s.insert(grid[i][j]);
        }
    }

    //missing number
    n = n * n;
    int realSum = (n * (n + 1)) /2 , sum = 0;
    for(int i : s)
        sum += i;

    ans.push_back(realSum - sum);

    return ans;
}

int main(){
    vector<vector<int>> grid = {{1,3},{2,2}};

    vector<int> ans = findMissingAndRepeatedValues(grid);

    for(int i : ans) cout << i << " ";
    return 0;
}