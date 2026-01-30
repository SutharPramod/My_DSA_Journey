#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int string_compression(vector<char> &chars){
    int n = chars.size() , idx = 0;
    for(int i = 0 ; i < n ;){
        char ch = chars[i];
        int count = 0;

        while(i < n && chars[i]==ch){
            count++;
            i++;
        }

        if(count == 1) chars[idx++] = ch;
        if(count > 1){
            chars[idx++] = ch;
            string cnt = to_string(count);
            for(char dig : cnt) chars[idx++] = dig;
        }
    }
    return idx;
}

int main(){
    vector<char> chars = {'a','a','b','b','b','c','c'};
    cout << string_compression(chars);
    return 0;
}