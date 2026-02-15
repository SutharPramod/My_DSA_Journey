#include <iostream>
#include <vector>
using namespace std;

void permute(vector<int> &nums, vector<vector<int>> &ans,vector<int> &current,vector<bool> &used){
    if(current.size() == nums.size()){
        ans.push_back({current});
        return;
    }
    
    for(int i = 0 ; i < nums.size() ; i++){
        if(used[i]) continue;
        if(i > 0 && nums[i] == nums[i-1] && !used[i-1]) continue;
        current.push_back(nums[i]);
        used[i] = true;
        permute(nums,ans,current,used);
        current.pop_back();
        used[i] = false;
    }
}

vector<vector<int>> permutations(vector<int> &nums){
    vector<vector<int>> ans;
    vector<bool> used(nums.size(),false);
    vector<int> current;
    permute(nums,ans,current,used);
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