#include <iostream>
#include <vector>
using namespace std;

double myPow(double x, int n)
{
    long no = n;
    if (n < 0)
    {
        x = 1 / x;
        no = -no;
    }
    double ans = 1;
    while (no > 0)
    {
        if (no % 2 == 1)
            ans *= x;
        no /= 2;
        x = x * x;
    }
    return ans;
}
int main()
{
    cout << myPow(3,5);
    return 0;
}