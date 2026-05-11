#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    void DFS(int sr,int sc,int color,vector<vector<int>>& image , int par){

        if(sr < 0 || sc < 0 || sr >= image.size() || sc >= image[0].size() || image[sr][sc] != par ) return ;
        int old = image[sr][sc];
        image[sr][sc] = color;

        //top
        DFS(sr + 1, sc , color , image , old);
        //bottom
        DFS(sr - 1, sc , color , image , old);
        //left
        DFS(sr, sc - 1 , color , image , old);
        //right
        DFS(sr, sc + 1 , color , image , old);
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {

        if(image[sr][sc] != color){
            DFS(sr , sc , color , image , image[sr][sc]);
        }

        return image;
    }
};

/**
 * Helper function to print the 2D grid.
 */
void printImage(const vector<vector<int>>& image) {
    for (const auto& row : image) {
        for (int pixel : row) {
            cout << pixel << " ";
        }
        cout << endl;
    }
}

int main() {
    Solution sol;

    // Test Case: Change color of connected '1's starting at (1,1) to '2'
    vector<vector<int>> image = {
        {1, 1, 1},
        {1, 1, 0},
        {1, 0, 1}
    };
    int sr = 1, sc = 1, newColor = 2;

    /*
       Initial:      Expected:
       1 1 1         2 2 2
       1 1 0   ->    2 2 0
       1 0 1         2 0 1
    */

    cout << "Original Image:" << endl;
    printImage(image);

    vector<vector<int>> result = sol.floodFill(image, sr, sc, newColor);

    cout << "\nAfter Flood Fill:" << endl;
    printImage(result);

    return 0;
}