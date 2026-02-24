#include <iostream>
#include <vector>
using namespace std;

void merge(vector<int> &nums,int st,int mid,int end){
    int i = st , j = mid + 1;
    vector<int> temp;
    while (i <= mid && j <= end)
    {
        if(nums[i] < nums[j]){ temp.push_back(nums[i]); i++;}
        else {temp.push_back(nums[j]); j++;}
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
}

void mergeSort(vector<int> &nums,int st,int end){
    if(st < end){
        int mid = st + (end - st)/2;

        //left
        mergeSort(nums,st,mid);
        //right
        mergeSort(nums,mid+1,end);

        merge(nums,st,mid,end);
    }
}

int main(){

    vector<int> nums = {4,2,5,6,2,5,2,1,5,3,5,4};
    mergeSort(nums,0,nums.size()-1);

    cout << "Sorted Array : " << endl;
    for(int i : nums){
        cout << i << " "; 
    }

    return 0;
}