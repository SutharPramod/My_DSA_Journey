#include <iostream>
#include <vector>

using namespace std;

int findDuplicate(vector<int> &nums){

    int slow = 0, fast = 0;
    do{
        slow = nums[slow];
        fast = nums[nums[fast]];
    }while(slow != fast);

    slow = 0;
    while(slow != fast){
        slow = nums[slow];
        fast = nums[fast];
    }
        
    return slow;
}

int main(){
    vector<int> nums = {1,2,3,4,4,5};

    cout << findDuplicate(nums);

    return 0;
}