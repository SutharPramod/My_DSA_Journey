#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        int n = image.size();
        
        for(vector<int> &arr : image){
            reverse(arr.begin(),arr.end());
            for(int &x : arr){
                x = 1 - x;
            }
        }
        
        return image;
    }
};

/**
 * Helper function to print the 2D image matrix.
 */
void printImage(const vector<vector<int>>& image) {
    for (const auto& row : image) {
        cout << "[ ";
        for (int val : row) cout << val << " ";
        cout << "]\n";
    }
}

int main() {
    Solution sol;

    // Test Case 1: [[1,1,0],[1,0,1],[0,0,0]]
    // Flip: [[0,1,1],[1,0,1],[0,0,0]]
    // Invert: [[1,0,0],[0,1,0],[1,1,1]]
    vector<vector<int>> img1 = {{1,1,0},{1,0,1},{0,0,0}};

    cout << "Original:\n"; printImage(img1);
    vector<vector<int>> res1 = sol.flipAndInvertImage(img1);
    cout << "Processed:\n"; printImage(res1);

    return 0;
}