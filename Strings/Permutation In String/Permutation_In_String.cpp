#include <iostream>
#include <vector>
using namespace std;

bool PermutationInString(string s1 , string s2){
    int n1 = s1.size() , n2 = s2.size(); 
    if(n1 > n2) return false;
    vector<int> f1(26) , f2(26);

    for(int i = 0 ; i < n1 ; i++){
        f1[s1[i] - 'a']++;
        f2[s2[i] - 'a']++;
    }

    for(int i = 0 ; i < n2 - n1 ; i++){
        if(f1 == f2) return true;

        f2[s2[i] - 'a']--;
        f2[s2[i + n1] - 'a']++;
    }
    return f1 == f2; //check for last condition
}

int main(){
    cout << PermutationInString("ab","eidbaooo");
    return 0;
}