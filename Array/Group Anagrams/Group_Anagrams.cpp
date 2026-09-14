#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
#include <algorithm>

using namespace std;

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string , vector<string>> m;
        
        vector<vector<string>> res;
        for (string& str : strs) {
            string word = str;
            sort(word.begin(),word.end());
            
            m[word].push_back(str);
        }

        for(auto &pair : m){
            res.push_back(move(pair.second));
        }

        return res;
    }
};

int main() {
    Solution sol;

    // Test Case 1
    vector<string> strs1 = {"eat", "tea", "tan", "ate", "nat", "bat"};
    auto res1 = sol.groupAnagrams(strs1);
    
    cout << "Test Case 1 Output:\n[\n";
    for (const auto& group : res1) {
        cout << "  [ ";
        for (const auto& word : group) cout << "\"" << word << "\" ";
        cout << "]\n";
    }
    cout << "]" << endl;

    // Test Case 2
    vector<string> strs2 = {""};
    auto res2 = sol.groupAnagrams(strs2);
    cout << "\nTest Case 2 Output: [ [ \"\" ] ]" << endl;

    // Test Case 3
    vector<string> strs3 = {"a"};
    auto res3 = sol.groupAnagrams(strs3);
    cout << "Test Case 3 Output: [ [ \"a\" ] ]" << endl;

    return 0;
}