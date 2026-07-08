#include <iostream>

using namespace std;

int secret_number;
int guess(int num) {
    if (num > secret_number) return -1;
    if (num < secret_number) return 1;
    return 0;
}

class Solution {
public:
    int guessNumber(int n) {
        if(n==1) return 1;
        int l=1,h=n;
        while(l <= h){
            int mid = l + (h - l)/2;
            int g=guess(mid);
            if(g==0) return mid;
            else if(g==1) l=mid +1;
            else h=mid-1;
        }
        return -1;
    }
};

int main() {
    Solution sol;
    int n = 10;
    secret_number = 6;

    cout << "The secret number is: " << sol.guessNumber(n) << " (Expected: 6)" << endl;

    return 0;
}