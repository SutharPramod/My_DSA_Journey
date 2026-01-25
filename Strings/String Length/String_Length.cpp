#include <iostream> 
using namespace std;
int len(string s){
    int i = 0;
    while(s[i]  != '\0'){
        i++;
    }
    return i;
}

int main(){
    string s = "Pramod";
    cout << len(s);
}