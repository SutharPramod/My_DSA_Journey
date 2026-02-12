#include <iostream>
#include <vector>
using namespace std;

void printSubsets(vector<int>& nums,int n,int i,vector<vector<int>> &ans,vector<int> &part){
    if(i == n){
        ans.push_back({part});
        return;
    }

    part.push_back(nums[i]);
    printSubsets(nums,n,i + 1,ans,part);
    part.pop_back();
    printSubsets(nums,n,i + 1,ans,part);
}
vector<vector<int>> subsets(vector<int>& nums){
    vector<vector<int>> ans;
    vector<int> part;
    printSubsets(nums,nums.size(),0,ans,part);
    return ans;
}

int main(){

    vector<int> nums = {1,2,3};
    vector<vector<int>> ans = subsets(nums);

    for(auto i : ans){
        cout << "[ ";
        for(auto j : i){
            cout << j << ","; 
        }
        cout << "]"<< endl;
    }
    return 0;
}