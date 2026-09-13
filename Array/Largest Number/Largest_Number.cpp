#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

class Solution {
public:
    string largestNumber(vector<int>& nums) {
        string res = "";

        vector<string> nums_s;

        for(int x : nums){
            nums_s.push_back(to_string(x));
        }

        sort(nums_s.begin() , nums_s.end() , [] (const string& a , const string& b){
            return a + b > b + a;
        });

        if(nums_s[0] == "0") return "0";

        for(string &s : nums_s){
            res += s;
        }
        return res;
    }
};

int main() {
    Solution sol;

    // Test Case 1
    vector<int> nums1 = {10, 2};
    cout << "Test Case 1 Output: \"" << sol.largestNumber(nums1) 
         << "\" (Expected: \"210\")" << endl;

    // Test Case 2
    vector<int> nums2 = {3, 30, 34, 5, 9};
    cout << "Test Case 2 Output: \"" << sol.largestNumber(nums2) 
         << "\" (Expected: \"9534330\")" << endl;

    // Test Case 3 (Edge Case: Multiple Zeros)
    vector<int> nums3 = {0, 0};
    cout << "Test Case 3 Output: \"" << sol.largestNumber(nums3) 
         << "\" (Expected: \"0\")" << endl;

    return 0;
}