#include <iostream>
#include <vector>
using namespace std;

int single_element(vector<int> &nums)
{
    int n = nums.size();
    if (n == 1)
        return nums[0];

    int st = 1, end = n - 2;
    if (nums[0] != nums[1])
        return nums[0];
    if (nums[n - 1] != nums[n - 2])
        return nums[n - 1];
    while (st <= end)
    {
        int mid = st + (end - st) / 2;

        if (nums[mid] != nums[mid - 1] && nums[mid] != nums[mid + 1])
            return nums[mid];

        if (mid % 2 == 0)
        {
            if (nums[mid] != nums[mid - 1])
                st = mid + 1;
            else
                end = mid - 1;
        } // even
        else
        {
            if (nums[mid] != nums[mid - 1])
                end = mid - 1;
            else
                st = mid + 1;
        } // odd
    }
    return -1;
}

int main()
{
    vector<int> nums = {1,2,2,3,3};
    cout << "Single Element : " << single_element(nums);
    return 0;
}