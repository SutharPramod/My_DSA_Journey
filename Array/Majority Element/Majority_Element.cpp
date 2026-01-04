#include <iostream>
#include <vector>
using namespace std;

int Majority_Element(vector<int> &nums)
{   
    int n = nums.size() , Major_ele = nums[0] ,count = 0;

    for(int i = 0;i < n;i++){
        if(nums[i] == Major_ele) count++;
        else count--;

        if(count < 0){
            Major_ele = nums[i];
            count = 0;
        }
    }
    return Major_ele;
}

int main()
{
    vector<int> nums = {1,2,2,1,1};
    cout << "Majority Element : " << Majority_Element(nums);

    return 0;
}