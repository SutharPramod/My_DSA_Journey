#include <iostream>
#include <stack>
using namespace std;

int main(){
    stack<int> s;

    s.push(1000);
    s.push(2000);
    s.push(3000);
    s.push(4000);

    while (!s.empty())
    {
        cout << s.top() << " ";
        s.pop();
    }
    
    return 0;
}