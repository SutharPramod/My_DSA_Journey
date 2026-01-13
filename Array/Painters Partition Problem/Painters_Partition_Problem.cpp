#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

bool isValid(vector<int> nums, int m ,int mid){
    int painter = 1 , paints = 0 , n = nums.size();
    for(int  i = 0 ; i < n ; i++){
        if(nums[i] > mid) return false;
        if(nums[i] + paints <= mid){
            paints += nums[i];
        }
        else{
            painter++;
            paints = nums[i];
        }
    }
    return painter <= m;
}

int Partition(vector<int> nums,int m){
    int n = nums.size(), maxn ,st = nums[0],end = 0,ans;
    for(int i : nums){
        st = max(st,i);
        end += i;
    }
    while(st < end){
        int mid = st + (end - st)/2;
        if(isValid(nums,m,mid)){
            ans = mid;
            end = mid - 1;
        }
        else st = mid + 1;
    }
    return ans;
}

int main()
{
    vector<int> nums = {40,30,20,10};
    int m = 2;
    cout << "Minimum no of partition of maximum : " << Partition(nums,m);

    return 0;
}