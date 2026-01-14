#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool isValid(vector<int> &nums,int c,int mid,int n){
    int cows = 1 , lastpos = nums[0];

    for(int i = 1; i < n ; i++){
        if(nums[i] - lastpos >= mid){
            lastpos = nums[i];
            cows++;
        }
    }
    return cows >= c;
}

int max_distance(vector<int> &nums,int c){
    int n = nums.size() , st = nums[0] , end = nums[0] , ans = -1;
    sort(nums.begin(),nums.end());
    
    st = nums[0] ;
    end = nums[n - 1];

    while (st <= end)
    {
        int mid = st + (end - st)/2;
        if(isValid(nums,c,mid,n)){
            ans = mid;
            st = mid + 1;
        }
        else end = mid - 1;
    }
    return ans;
}

int main(){
    vector<int> nums =  {1, 2, 4, 8, 9};
    int c = 3;

    cout << "Minimum distance between cows : " <<max_distance(nums,c);
    return 0;
}

