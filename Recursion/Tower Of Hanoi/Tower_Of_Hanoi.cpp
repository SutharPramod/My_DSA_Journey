#include <iostream>
using namespace std;

void towerOfHanoi(int n,char s,char h,char d){
    if( n == 0 ) return;
    towerOfHanoi(n-1,s,d,h);
    cout << s << " -> " << d << endl;
    towerOfHanoi(n-1,h,s,d);
}

int main(){
    towerOfHanoi(3,'1','2','3');
    return 0;
}