#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;

vector<vector<int>> Three_Sum(vector<int> nums , int target){
    vector<vector<int>> ans;
    sort(nums.begin(),nums.end());
    for(int i = 0 ; i < nums.size() ; i++){
        if(nums[i] > target) break;
        if(i > 0 && nums[i] == nums[i - 1]) continue;
        int j = i + 1 , k = nums.size() - 1;
        while(j < k){
            
            if(nums[i] + nums[j] + nums[k] == target){
                ans.push_back({nums[i],nums[j],nums[k]});
                while (j < k && nums[j] == nums[j + 1]) j++;
                while (j < k && nums[k] == nums[k - 1]) k--;
                
                j++;k--;
            }
            else if(nums[i] + nums[j] + nums[k] > target){
                k--;
            }
            else{
                j++;
            }
        }
    }
    return ans;
}

int main(){
    vector<int> nums = {-1,0,1,2,-1,-4};
    vector<vector<int>> ans = Three_Sum(nums,0);
    for(auto i : ans){
        for(auto j : i){
            cout << j << " "; 
        }
        cout << endl;
    }
    return 0;
}