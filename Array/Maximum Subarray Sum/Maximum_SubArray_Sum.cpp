#include <iostream>
#include <vector>
#include<climits>
using namespace std;

int MaxSubArrSum(vector<int> &nums)
{
    int currSum = 0,MaxSum = nums[0], n = nums.size();

    if(n == 1) return nums[0];

    for(int i = 0 ; i < n ; i++){
        currSum += nums[i];
        MaxSum = max(MaxSum,currSum);
        if(currSum < 0) currSum = 0;
    }
    return MaxSum;
}

int main()
{
    vector<int> nums = {4, 1, 2, 1, 2};
    cout << "Maximum Subarray Sum : " << MaxSubArrSum(nums);

    return 0;
}