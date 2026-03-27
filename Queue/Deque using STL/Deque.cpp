#include<iostream>
#include<deque>
using namespace std;

int main(){
    deque<int> q1;

    q1.push_back(1);
    q1.push_back(3);
    q1.push_front(2);
    q1.push_front(8);
    q1.pop_back();
    q1.pop_front();
    cout << "Front : " << q1.front() << endl;
    cout << "Back : " << q1.back() << endl;
    cout << (q1.empty() ? "Queue is Empty" : "Queue is not Empty") << endl;

    return 0;
}