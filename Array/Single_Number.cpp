#include <iostream>
#include <vector>
using namespace std;

int singleNumber(vector<int> &nums)
{
    int n = nums.size(), ans = nums[0];
    if (n == 1)
        return ans;
    for (int i = 1; i < n; i++)
    {
        ans ^= nums[i]; // ans = ans ^ nums[i]
    }
    return ans;
}

int main()
{
    vector<int> nums = {4, 1, 2, 1, 2};
    cout << "Single Number : " << singleNumber(nums);

    return 0;
}