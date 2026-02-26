#include <iostream>
#include <vector>
using namespace std;

int merge(vector<int> &nums,int st,int mid,int end){
    int i = st , j = mid + 1 , count = 0;
    vector<int> temp;
    while (i <= mid && j <= end)
    {
        if(nums[i] <= nums[j]){ temp.push_back(nums[i]); i++;}
        else {temp.push_back(nums[j]); j++; count+= (mid - i + 1);}
    }

    while (i <= mid)
    {
        temp.push_back(nums[i]);
        i++;
    }

    while (j <= end)
    {
        temp.push_back(nums[j]);
        j++;
    }
    
    for(int i = 0 ; i < temp.size() ; i++){
        nums[st + i] = temp[i];
    }

    return count;
}

int countInversions(vector<int> &nums,int st,int end){
    if(st < end){
        int mid = st + (end - st)/2;

        int left = countInversions(nums,st,mid);
        int right = countInversions(nums,mid+1,end);
        int inversions = merge(nums,st,mid,end);

        return left + right + inversions;
    }
    return 0;
}

int main(){

    vector<int> nums = {2, 4, 1, 3, 5};
    cout << countInversions(nums,0,nums.size()-1);

    return 0;
}