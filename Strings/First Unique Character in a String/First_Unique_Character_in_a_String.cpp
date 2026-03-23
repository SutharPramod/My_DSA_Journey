#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
    int firstUniqChar(string s) {
        vector<int> v(26,0);
        for(char ch : s) v[ch-'a']++;

        for(int i = 0 ; i < s.size() ; i++){
            if(v[s[i]-'a'] == 1) return i;
        }
        return -1;
    }
};

void test(string s) {
    Solution sol;
    int result = sol.firstUniqChar(s);
    cout << "Input: \"" << s << "\" -> First Unique Index: " << result << endl;
}

int main() {
    
    test("leetcode");

    test("loveleetcode");

    test("aabb");

    return 0;
}
