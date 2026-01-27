#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

string removeAllOccurences(string s, string part){
    int len = part.size();
    
    while(s.find(part) != -1){
        s.erase(s.find(part),len);
    }
    return s;
}
int main(){

    string s = "daabcbaabcbc";
    string part = "abc";
    cout << removeAllOccurences(s,part);
    return 0;
}