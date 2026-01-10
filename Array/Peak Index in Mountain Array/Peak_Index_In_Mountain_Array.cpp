#include <iostream>
#include <vector>
using namespace std;

int peak(vector<int> nums){
    int n = nums.size(),ans;
    int s = 0 , e = n - 1;
    while(s <= e){
        int mid = s + (e - s)/2;

        if(nums[mid] > nums[mid + 1] && nums[mid] > nums[mid - 1]){
            return mid;
        }

        if(nums[mid-1] < nums[mid]) s = mid + 1;
        else e = mid - 1;
    }
    return -1;
}

int main()
{
    vector<int> nums = {4,5,6,7,0,1,2};
    cout << "Peak Index : " << peak(nums);

    return 0;
}