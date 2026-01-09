#include <iostream>
#include <vector>
using namespace std;

int search(vector<int> nums, int target){
    int n = nums.size();
    int s = 0 , e = n - 1;
    while(s <= e){
        int mid = s + (e - s)/2;
        if(nums[mid] == target) return mid;
        if(nums[s] <= nums[mid]){
            if(nums[s] <= target && target <= nums[mid]) e = mid - 1;
            else s = mid + 1;
        }
        else{
            if(nums[mid] <= target && target <= nums[e]) s = mid + 1;
            else e = mid - 1;
        }
    }
    return -1;
}

int main()
{
    vector<int> nums = {4,5,6,7,0,1,2};
    int target = 2;
    cout << "Index of target : " << search(nums,target);

    return 0;
}