#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        int dp[1001] = {0};
        for(int i = 0 ; i < nums1.size() ; i++) dp[nums1[i]]++;
        vector<int> ans;
        for(int i = 0 ; i < nums2.size() ; i++){
            if(dp[nums2[i]] > 0){
                ans.push_back(nums2[i]);
                dp[nums2[i]]--;
            }
        }
        return ans;
    }
};

void printVector(const vector<int>& v) {
    cout << "[";
    for (size_t i = 0; i < v.size(); ++i) {
        cout << v[i] << (i == v.size() - 1 ? "" : ", ");
    }
    cout << "]" << endl;
}

int main() {
    Solution sol;
    vector<int> nums1 = {4, 9, 5, 4};
    vector<int> nums2 = {9, 4, 9, 8, 4};

    vector<int> result = sol.intersect(nums1, nums2);
    cout << "Intersection II: ";
    printVector(result); // Expected: [4, 4, 9] (in any order)

    return 0;
}