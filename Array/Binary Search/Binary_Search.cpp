#include <iostream>
#include <vector>
using namespace std;


int binary_search(vector<int> &nums , int target){
    int n = nums.size();
    if(n == 1) return 0;
    int st = 0 , end = n - 1;
    while (st <= end)
    {
        int mid = st + (end - st)/2;
        if(nums[mid] == target) return mid;
        if(nums[mid] > target) end = mid - 1;
        if(nums[mid] < target) st = mid + 1;
    }
    return -1;
}

int main(){
    vector<int> nums = {1,2,4,5,6,7,8};
    int target = 7;
    cout << "Index of Target : " << binary_search(nums,target);
    return 0;
}