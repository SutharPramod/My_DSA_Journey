#include <iostream>
#include <vector>
using namespace std;

int partition(vector<int> &nums,int st,int end){
    int idx = st - 1,pivot = nums[end];
    for (int i = st; i < end; i++)
    {
        if(pivot > nums[i]){
            swap(nums[++idx],nums[i]);
        }
    }
    swap(nums[++idx],nums[end]);

    return idx;
}

void quickSort(vector<int> &nums,int st,int end){
    if(st < end){
        int pivot = partition(nums,st,end);
        //left
        quickSort(nums,st,pivot-1);
        //right
        quickSort(nums,pivot+1,end);
    }
}

int main(){

    vector<int> nums = {4,2,5,6,2,5,2,1,5,3,5,4};
    quickSort(nums,0,nums.size()-1);

    cout << "Sorted Array : " << endl;
    for(int i : nums){
        cout << i << " "; 
    }

    return 0;
}