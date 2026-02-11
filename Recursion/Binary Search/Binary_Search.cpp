#include <iostream>
#include <vector>
using namespace std;

int ans = -1;

int Binary_Search(vector<int> &nums, int st, int end, int target)
{
    if(st > end) return -1;
    int mid = st + (end - st) / 2;
    if (nums[mid] == target)
        ans = mid;
    if (nums[mid] > target)
        Binary_Search(nums, st, mid - 1, target);
    if (nums[mid] < target)
        Binary_Search(nums, mid + 1, end, target);
}

int main()
{
    vector<int> nums = {-1, 0, 3, 5, 9, 12};
    int target = 14;
    cout << Binary_Search(nums , 0 , nums.size() - 1 , target);
    return 0;
}