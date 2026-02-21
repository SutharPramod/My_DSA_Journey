#include <iostream>
#include <vector>
using namespace std;

bool isPalindrome(string part){
    int i = 0 , n = part.size() - 1;

    while(i < n){
        if(part[i] != part[n]) return false;
        i++;
        n--;
    }
    return true;
}

void getAll(string s,vector<vector<string>> &ans,vector<string> &partition){
    if(s.size() == 0){
        ans.push_back(partition);
        return;
    }

    for(int i = 0 ; i < s.size() ; i++){
        string part = s.substr(0,i+1);

        if(isPalindrome(part)){
            partition.push_back(part);
            getAll(s.substr(i+1),ans,partition);
            partition.pop_back();
        }
    }
}


vector<vector<string>> palindromePartition(string s){
    vector<vector<string>> ans;
    vector<string> partition;
    getAll(s,ans,partition);

    return ans;
}

int main(){
    string s = "aab";
    vector<vector<string>> ans = palindromePartition(s);

    for(auto i : ans){
        for(auto j : i){
            cout << j << " ";
        }
        cout << endl;
    }
    return 0;
}