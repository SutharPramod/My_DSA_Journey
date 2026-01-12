#include <iostream>
#include <vector>
#include <climits>
using namespace std;


bool valid(vector<int> &nums,int m,int mid){
    int stud = 1 , books = 0;
    for(int i = 0; i < nums.size() ; i++){
        if(nums[i] > mid) return false;

        else if(books + nums[i] > mid){
            stud++;
            books = nums[i];
        }
        else{
            books += nums[i];
        }
    }
    return stud <= m;
}
int Allocation(vector<int> &nums,int m)
{   
    int n = nums.size(),maxN = INT_MIN,minN = INT_MAX,ans = -1,sum = 0;

    if(m > n) return -1;

    for(int i: nums){
        sum += i;
        minN = min(i,minN);
    }

    int st = minN,end = sum;

    while(st <= end){
        int mid = st + (end - st)/2;

        if(valid(nums,m,mid)){
            ans = mid;
            end = mid - 1;
        }
        else{
            st = mid + 1;
        }
    }
    return ans;
}

int main()
{
    vector<int> nums = {5, 17, 100, 11} ;
    int m = 4;
    cout << "Minimum number of books in N allocation : " << Allocation(nums,m);

    return 0;
}