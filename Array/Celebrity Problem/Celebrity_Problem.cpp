#include <iostream>
#include <vector>
#include <stack>
using namespace std;

class Solution {
  public:
    int celebrity(vector<vector<int>>& mat) {
        int top = 0 , bottom = mat.size() - 1;

        while(top < bottom){
            if(mat[top][bottom] == 1) top++;
            else bottom--;
        }

        int celeb = top;
        for(int i = 0 ; i < mat.size() ; i++){
            if(i != celeb && (mat[i][celeb] != 1 || mat[celeb][i] != 0)) return -1;
        }

        return celeb;
    }
};

void testCelebrity(vector<vector<int>> mat) {
    Solution sol;
    int res = sol.celebrity(mat);
    if (res == -1) 
        cout << "No Celebrity found." << endl;
    else 
        cout << "Celebrity is person at index: " << res << endl;
}

int main() {
    
    vector<vector<int>> mat1 = {{0, 1, 0}, 
                                {0, 0, 0}, 
                                {0, 1, 0}};
    cout << "Test Case 1: ";
    testCelebrity(mat1); 

    vector<vector<int>> mat2 = {{0, 1}, 
                                {1, 0}};
    cout << "Test Case 2: ";
    testCelebrity(mat2); 

    return 0;
}
