#include <iostream>

using namespace std;

int first_bad = 4;
bool isBadVersion(int version) {
    return version >= first_bad;
}

class Solution {
public:
    int firstBadVersion(int n) {
        int l = 1 , h = n;
        while(l <= h){
            int mid = l + (h - l)/2;
            bool f = isBadVersion(mid);
            if(f){
                h = mid - 1;
            }else{
                l = mid + 1;
            }
        }
        return l;
    }
};

int main() {
    Solution sol;
    int n = 5;
    first_bad = 4;

    cout << "The first bad version is: " << sol.firstBadVersion(n) << " (Expected: 4)" << endl;

    return 0;
}