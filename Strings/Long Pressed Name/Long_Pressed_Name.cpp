#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
    bool isLongPressedName(string name, string typed) {
        int i = 0 , j = 0 , n = name.size() , m = typed.size();

        while(j < m){
            if(i < n && name[i] == typed[j]){
                i++;
                j++;
            }
            else if(j > 0 && typed[j] == typed[j-1]){
                j++;
            }
            else{
                return false;
            }
        }

        return i == n;
    }
};

int main() {
    Solution solution;
    
    // Test Case 1
    string name1 = "alex", typed1 = "aaleex";
    bool result1 = solution.isLongPressedName(name1, typed1);
    cout << "Test Case 1: " << (result1 ? "true" : "false") << endl;
    
    // Test Case 2
    string name2 = "saeed", typed2 = "ssaaedd";
    bool result2 = solution.isLongPressedName(name2, typed2);
    cout << "Test Case 2: " << (result2 ? "true" : "false") << endl;
    
    return 0;
}