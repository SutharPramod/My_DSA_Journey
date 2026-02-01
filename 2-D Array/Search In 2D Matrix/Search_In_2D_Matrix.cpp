#include <iostream>
#include <vector>
using namespace std;

bool searchMatrix(vector<vector<int>> &matrix, int target)
{
    int i = 0 , n = matrix.size() , m = matrix[0].size() - 1; 

    while( i < n){
        int j = 0 ;
        if(matrix[i][j] <= target && target <= matrix[i][m] ){
            while (j <= m)
            {
                int mid = j + (m - j) / 2;
                if(matrix[i][mid] == target) return true;
                if(matrix[i][mid] > target) m = mid - 1;
                if(matrix[i][mid] < target) j = mid + 1;
            }
        }
        else i++;
    }
    return false;
}

int main()
{
    vector<vector<int>> matrix = {
        {1, 3, 5, 7},
        {10, 11, 16, 20},
        {23, 30, 34, 60}};
    cout << searchMatrix(matrix, 7);
    return 0;
}