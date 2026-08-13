#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int c5 = 0, c10 = 0;
        for(int i = 0 ; i < bills.size() ; i++){
            int x = bills[i];
            if(x == 5) c5 += 1;
            else if(x == 10){
                if(c5 < 1) return false;
                c10++;
                c5--;
            }
            else{
                if(c10 > 0){
                    c10--;
                    if(c5 == 0) return 0;
                    c5--;
                }else{
                    if(c5 < 3) return 0;
                    c5 -= 3;
                }
            }
        }
        return true;
    }
};

int main() {
    Solution sol;

    // Test Case 1
    vector<int> bills1 = {5, 5, 5, 10, 20};
    // Expected Output: True
    cout << "Test Case 1: " << (sol.lemonadeChange(bills1) ? "True" : "False") << " (Expected: True)" << endl;

    // Test Case 2
    vector<int> bills2 = {5, 5, 10, 10, 20};
    // Expected Output: False
    cout << "Test Case 2: " << (sol.lemonadeChange(bills2) ? "False" : "True") << " (Expected: False)" << endl;

    return 0;
}