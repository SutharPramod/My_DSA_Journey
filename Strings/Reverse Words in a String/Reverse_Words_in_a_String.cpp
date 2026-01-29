#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

string Reverse_words(string s){
    int n = s.length();
    if(n == 0) return "";
    reverse(s.begin(),s.end());
    string ans = "";
    for(int i = 0 ; i < n;){
        string word = "";
        while(i < n && s[i] != ' '){
            word += s[i];
            i++;
        }
        reverse(word.begin(),word.end());
        i++;
        if(word.length() > 0)
            ans += " " + word;
    }
    return ans.substr(1);
}

int main(){
    string s = "";
    cout << "Reverse String : " <<  Reverse_words(s);
    return 0;
}