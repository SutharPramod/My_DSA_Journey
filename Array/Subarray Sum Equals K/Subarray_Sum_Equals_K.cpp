#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

int Subarray_Sum_Equals_K(vector<int> &nums , int target){
    int count = 0, currSum = 0;

    unordered_map<int ,int> m;
    m[0] = 1;
    for(int i = 0 ; i < nums.size() ; i++){
        currSum += nums[i];
        int d = currSum - target;
        count += m[d];
        m[currSum]++;
    }
    return count;
}

int main(){

    vector<int> nums = {1,1,1};
    int target = 2;


    cout << Subarray_Sum_Equals_K(nums , target);

    return 0;
}