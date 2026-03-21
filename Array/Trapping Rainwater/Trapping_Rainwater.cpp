#include <iostream>
#include <vector>
#include <stack>
#include <algorithm>
using namespace std;

class Solution {
public:
    int trap(vector<int>& height) {
        int water = 0 , l = 0, r = height.size() - 1 , lmax = 0, rmax = 0 ;

        while (l < r)
        {
            lmax = max(lmax , height[l]);
            rmax = max(rmax , height[r]);

            if(lmax < rmax){
                water += (lmax - height[l]);
                l++;
            }
            else{
                water += (rmax - height[r]);
                r--;
            }

        }
        
        return water;
    }
};

void testTrap(vector<int> height) {
    Solution sol;
    cout << "Heights: ";
    for (int h : height) cout << h << " ";
    cout << "\nWater Trapped: " << sol.trap(height) << endl << endl;
}

int main() {
    
    testTrap({0, 1, 0, 2, 1, 0, 1, 3, 2, 1, 2, 1});

    testTrap({4, 2, 0, 3, 2, 5});

    return 0;
}
