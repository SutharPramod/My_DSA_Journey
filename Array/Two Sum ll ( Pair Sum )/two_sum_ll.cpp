#include <iostream>
#include <vector>
using namespace std;

vector<int> twoSumll(vector<int> &nums,int target)
{
    int n = nums.size() , st = 0, end = n - 1;
    vector<int> ans;

    while(st < end){
        if(nums[st] + nums[end] > target) end--;
        if(nums[st] + nums[end] < target) st++;
        if(nums[st] + nums[end] == target){
            ans.push_back(st + 1);
            ans.push_back(end + 1);
            return ans;
        }
    }
    return ans;
}

int main()
{
    vector<int> nums = {2,7,8,11};
    int target = 9;
    vector<int> ans = twoSumll(nums,target);

    for(int i : ans){
        cout << i << " ";
    }
    return 0;
}