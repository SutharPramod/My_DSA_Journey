#include<iostream>
#include<queue>
using namespace std;

int main(){
    queue<int> q1;

    q1.push(1);
    q1.push(1);
    q1.push(2);
    q1.pop();
    q1.pop();
    cout << "Front : " << q1.front() << endl;
    cout << (q1.empty() ? "Queue is Empty" : "Queue is not Empty") << endl;

    return 0;
}