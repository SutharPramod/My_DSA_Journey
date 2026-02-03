#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

vector<int> Two_sum(vector<int> arr , int target){
    unordered_map<int ,int> m;

    for(int i = 0 ; i < arr.size() ; i++){
        int comp = target - arr[i];
        if(m.find(comp) != m.end()){
            return {m[comp],i};
            break;
        }
        else{
            m[arr[i]] = i;
        }
    }
    return {};
}

int main(){
    vector<int> arr = {2,7,11,15};
    int target = 9;
    vector<int> ans = Two_sum(arr , target);
    for(int i : ans) cout << i << " ";
    return 0;
}