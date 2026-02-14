#include <iostream>
#include <vector>
using namespace std;

void permute(vector<int> &nums, vector<vector<int>> &ans , int idx){
    if(idx == nums.size()){
        ans.push_back({nums});
        return;
    }

    for(int i = idx ; i < nums.size() ; i++){
        swap(nums[idx],nums[i]);
        permute(nums,ans,idx+1);
        swap(nums[idx],nums[i]);
    }
}

vector<vector<int>> permutations(vector<int> &nums){
    vector<vector<int>> ans;
    permute(nums,ans,0);
    return ans;
}

int main(){

    vector<int> nums = {1,2,2};
    vector<vector<int>> ans = permutations(nums);

    for(auto i : ans){
        cout << "[ ";
        for(auto j : i){
            cout << j << ","; 
        }
        cout << "]"<< endl;
    }
    return 0;
}