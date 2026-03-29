#include <iostream>
#include <vector>
#include <deque>
#include <algorithm>

using namespace std;

class Solution {
public:
    
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        if(nums.size() == 1) return {nums[0]};
        vector<int> result;
        
        deque<int> dq;

        for(int i = 0 ; i < k ; i++){
            while(dq.size() > 0 && nums[dq.back()] <= nums[i]) dq.pop_back();
            dq.push_back(i);
        }
        result.push_back(nums[dq.front()]);

        for(int i = k ; i < nums.size() ; i++){
            while(dq.size() > 0 && dq.front() < i - k + 1) dq.pop_back();
            while(dq.size() > 0 && nums[dq.back()] <= nums[i]) dq.pop_back();
            dq.push_back(i);
            result.push_back(nums[dq.front()]);
        }
        return result;
    }
};

int main() {
    Solution sol;
    
    vector<int> nums = {1, 3, -1, -3, 5, 3, 6, 7};
    int k = 3;
    
    vector<int> result = sol.maxSlidingWindow(nums, k);
    
    cout << "Sliding Window Maximums: ";
    for (int val : result) {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}