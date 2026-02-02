#include <iostream>
#include <vector>
using namespace std;

vector<int> spiralOrder(vector<vector<int>>& matrix) {
    int srow = 0 , scol = 0 , erow = matrix.size() - 1 , ecol = matrix[0].size() - 1;
    vector<int> ans;
    while (srow <= erow && scol <= ecol)
    {
        //top
        for(int i = scol ; i <= ecol ; i++){
            ans.push_back(matrix[srow][i]);
        }
        //right
        for(int i = srow + 1 ;  i <= erow ; i++){
            ans.push_back(matrix[i][ecol]);
        }
        //bottom
        for(int i = ecol - 1 ; i >= scol ; i--){
            if(srow == erow) break;
            ans.push_back(matrix[erow][i]);
        }
        //top
        for(int i = erow - 1 ; i >= srow + 1 ; i--){
            if(scol == ecol) break;
            ans.push_back(matrix[i][scol]);
        }
        srow++;
        scol++;
        erow--;
        ecol--;
    }
    return ans;
}

int main()
{
    vector<vector<int>> matrix = {{1,2,3},{4,5,6},{7,8,9}};
    vector<int> ans =  spiralOrder(matrix);
    for(int i : ans) cout << " " << i;
    return 0;
}