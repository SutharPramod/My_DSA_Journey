#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.size() == 0) return "";
        string ref = strs[0];
        int n = ref.size() , m = strs.size();
        for(int i = 0 ; i < n ; i++){
            char ch = ref[i];

            for(int j = 0 ; j < m ; j++){
                if(i >= strs[j].size() || strs[j][i] != ch){
                    return ref.substr(0 , i);
                }
            }
        }
        return ref;
    }
};

int main() {
    Solution solution;
    
    // Test Case 1
    vector<string> strs1 = {"flower", "flow", "flight"};
    cout << "Test Case 1 Output: \"" << solution.longestCommonPrefix(strs1) << "\"" << endl;
    
    // Test Case 2
    vector<string> strs2 = {"dog", "racecar", "car"};
    cout << "Test Case 2 Output: \"" << solution.longestCommonPrefix(strs2) << "\"" << endl;
    
    return 0;
}