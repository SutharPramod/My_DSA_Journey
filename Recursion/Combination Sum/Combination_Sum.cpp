#include <iostream>
#include <set>
#include <vector>
using namespace std;

set<vector<int>> s;
void allCombinations(vector<int>& candidates, int target,vector<vector<int>> &ans,vector<int> &comb , int i , int n){

    //base case
    if(i == n || target < 0){
        if(target == 0){
            if(s.find(comb) == s.end()){
                ans.push_back(comb);
                s.insert(comb);
                return;
            }
        }
        return;
    }

    comb.push_back(candidates[i]);
    //single
    allCombinations(candidates,target-candidates[i],ans,comb,i+1,n);
    //multiple
    allCombinations(candidates,target-candidates[i],ans,comb,i,n);
    comb.pop_back();
    //exclusion
    allCombinations(candidates,target,ans,comb,i+1,n);
}
vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
    vector<vector<int>> ans;
    vector<int> comb;
    allCombinations(candidates,target,ans,comb,0,candidates.size());
    return ans;
}

int main(){
    vector<int> candidates = {2,3,5};
    int target = 8;
    vector<vector<int>> ans = combinationSum(candidates,target);

    for(auto i : ans){
        for(auto j : i){
            cout << j << " ";
        }
        cout << endl;
    }

    return 0;
}