#include <iostream> 
using namespace std;
bool alphaNumeric(char ch){
    if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') || (ch >= '0' && ch <= '9')) return true;
    else return false;
}
bool validPalindrome(string s1){
    int st = 0 , end = s1.length() - 1;
    while(st < end){
        if(!alphaNumeric(s1[st])) st++;
        if(!alphaNumeric(s1[end])) end--;

        if(tolower(s1[st++] != tolower(s1[end--]))) return false;
    }
    return true;
}

int main(){
    string s = "aba";

    if(validPalindrome(s)) cout << "This is Valid Palindrome";
    else cout << "This is not Valid Palindrome";
}