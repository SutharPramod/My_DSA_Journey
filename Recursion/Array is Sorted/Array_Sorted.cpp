#include <iostream>
#include <vector>
using namespace std;

bool check(vector<int> &nums , int n){
    if(n == 1) return true;
    return nums[n-1] > nums[n-2] && check(nums , n - 1);
}
int main(){
    vector<int> nums = {1,2,3,4,5};
    cout << check(nums , nums.size()); 
    return 0;
}