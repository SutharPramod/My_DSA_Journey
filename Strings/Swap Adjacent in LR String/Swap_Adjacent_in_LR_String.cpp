#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    bool canTransform(string start, string end) {
        if (start.length() != end.length()) return false;
        
        int n = start.length();
        int i = 0, j = 0;
        
        while (i < n || j < n) {
            // Skip all 'X' in start
            while (i < n && start[i] == 'X') {
                i++;
            }
            // Skip all 'X' in end
            while (j < n && end[j] == 'X') {
                j++;
            }
            
            // If one reaches the end, both must reach the end
            if (i == n || j == n) {
                return i == n && j == n;
            }
            
            // Characters must match
            if (start[i] != end[j]) return false;
            
            // Check relative positions for 'L' and 'R'
            if (start[i] == 'L' && i < j) return false; // L can only move left (i >= j)
            if (start[i] == 'R' && i > j) return false; // R can only move right (i <= j)
            
            i++;
            j++;
        }
        
        return true;
    }
};

int main() {
    Solution solution;
    
    string start1 = "RXXLRXRXL";
    string end1 = "XRLXXRRLX";
    cout << "Test 1: " << (solution.canTransform(start1, end1) ? "true" : "false") << endl;
    
    string start2 = "X";
    string end2 = "L";
    cout << "Test 2: " << (solution.canTransform(start2, end2) ? "true" : "false") << endl;
    
    return 0;
}