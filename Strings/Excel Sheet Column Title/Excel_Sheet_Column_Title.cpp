#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

class Solution {
public:
    string convertToTitle(int columnNumber) {
        string ans = "";
        while(columnNumber > 0){
            columnNumber--;
            ans += (char) ('A' + columnNumber % 26);
            columnNumber /= 26;
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};
int main() {
    Solution solution;
    
    // Test case 1
    int col1 = 1;
    cout << "Input: " << col1 << "\nOutput: " << solution.convertToTitle(col1) << "\n\n";
    
    // Test case 2
    int col2 = 28;
    cout << "Input: " << col2 << "\nOutput: " << solution.convertToTitle(col2) << "\n\n";

    // Test case 3
    int col3 = 701;
    cout << "Input: " << col3 << "\nOutput: " << solution.convertToTitle(col3) << "\n\n";

    return 0;
}