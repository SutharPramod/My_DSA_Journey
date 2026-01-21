#include <iostream>
#include <vector>
using namespace std;

void next_Permutation(vector<int> &nums){
    int n = nums.size() , pivot = -1;
    //pivot
    for(int i = n - 1 ; i >= 0 ; i--){
        if(nums[i] > nums[i - 1]){
            pivot = i - 1;
            break;
        }
    }
    //edge case reversed array
    if(pivot == -1){
        int st = 0 , end = n - 1;
        while(st < end){
            swap(nums[st++],nums[end--]);
            return;
        }
    }
    //swap pivot with rightmost element
    for(int i = n - 1 ; i > pivot ; i--){
        if(nums[pivot] < nums[i]){
            swap(nums[pivot],nums[i]);
            break;
        }
    }
    //reverse the array after pivot
    int st = pivot + 1 , end = n - 1;
    while(st < end){
        swap(nums[st++],nums[end--]);
    }
}

int main(){
    vector<int> nums = {3,2,1};
    next_Permutation(nums);
    for(int i : nums){
        cout << i << " ";
    }
    return 0;
}