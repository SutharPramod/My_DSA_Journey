#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
#include <climits>

using namespace std;

class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        vector<int> temp = arr;
        sort(temp.begin(),temp.end());

        unordered_map<int,int> m;
        int last = INT_MAX;
        int rank = 1;

        for(int x : temp){
            if(x == last){
                continue;
            }else{
                m.insert({x,rank});
                rank++;
                last = x;
            }
        }
        vector<int> res;
        for(int x : arr){
            res.push_back(m[x]);
        }
        return res;
    }
};

int main() {
    Solution sol;

    // Test Case 1
    vector<int> arr1 = {40, 10, 20, 30};
    auto res1 = sol.arrayRankTransform(arr1);
    cout << "Test Case 1 Output: [ ";
    for (int x : res1) cout << x << " ";
    cout << "]\n(Expected: [4 1 2 3])\n" << endl;

    // Test Case 2 (With Duplicates)
    vector<int> arr2 = {100, 100, 100};
    auto res2 = sol.arrayRankTransform(arr2);
    cout << "Test Case 2 Output: [ ";
    for (int x : res2) cout << x << " ";
    cout << "]\n(Expected: [1 1 1])\n" << endl;

    // Test Case 3
    vector<int> arr3 = {37, 12, 28, 9, 100, 56, 80, 56, 80};
    auto res3 = sol.arrayRankTransform(arr3);
    cout << "Test Case 3 Output: [ ";
    for (int x : res3) cout << x << " ";
    cout << "]\n(Expected: [5 2 4 1 7 6 7 6 7] or similar valid ranks)" << endl;

    return 0;
}