#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
	public:
	void help(string &s, string &res, int idx, int prev) {
		if (idx >= s.size())
			return;
		
		if (prev == -1) {
			res += s[idx];
			help(s, res, idx + 1, prev + 1);
		}
		else {
			if (s[idx] != res[prev]) {
				res += s[idx];
				help(s, res, idx + 1, prev + 1);
			}
			else
				help(s, res, idx + 1, prev);
		}
		
	}
	string removeDuplicates(string& s) {
		string res = "";
		help(s, res, 0, -1);
		return res;
	}
};


int main() {
    Solution solution;
    
    // Test Case 1
    string s1 = "abbaca";
    cout << "Input: " << s1 << endl;
    cout << "Output: " << solution.removeDuplicates(s1) << endl;
    
    // Test Case 2
    string s2 = "azxxzy";
    cout << "Input: " << s2 << endl;
    cout << "Output: " << solution.removeDuplicates(s2) << endl;
    
    return 0;
}