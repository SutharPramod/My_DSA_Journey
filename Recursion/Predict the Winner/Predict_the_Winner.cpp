#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>

using namespace std;

class Solution {
public:
    int dp[21][21];
    int dfs(vector<int>& nums, int idxs, int idxe, int turn) {
        if (idxs > idxe) {
            return 0;
        }
        if (dp[idxs][idxe] != -1) {
            return dp[idxs][idxe];
        }

        int st, end;
        if (turn == 1) { // p1
            st = nums[idxs] + dfs(nums, idxs + 1, idxe, 1 - turn);
            end = nums[idxe] + dfs(nums, idxs, idxe - 1, 1 - turn);
            return dp[idxs][idxe] = max(st , end);
        } else { // p2
            st = -nums[idxs] + dfs(nums, idxs + 1, idxe, 1 - turn);
            end = -nums[idxe] + dfs(nums, idxs, idxe - 1, 1 - turn);
            return dp[idxs][idxe] = min(st , end);
        }
    }

    bool predictTheWinner(vector<int>& nums) {
        memset(dp, -1, sizeof(dp));
        return dfs(nums,0, nums.size() - 1, 1) >= 0;
    }
};

int main() {
    Solution solution;
    
    vector<int> nums1 = {1, 5, 2};
    cout << "Test Case 1: " << (solution.predictTheWinner(nums1) ? "true" : "false") << endl;
    
    vector<int> nums2 = {1, 5, 233, 7};
    cout << "Test Case 2: " << (solution.predictTheWinner(nums2) ? "true" : "false") << endl;
    
    return 0;
}