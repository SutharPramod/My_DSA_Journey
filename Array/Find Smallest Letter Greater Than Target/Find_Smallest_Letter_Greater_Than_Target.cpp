#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int s = 0 , e = letters.size() - 1;
        if(target == 'z') return letters[0];
        char ans = letters[0];
        while(s <= e){
            int m = s + (e-s)/2;
            char c = letters[m];
            if(c > target){
                ans = c;
                e = m - 1;
            }
            else{
                s = m + 1;
            }
        }
        return ans;
    }
};

int main() {
    Solution sol;

    // Test Case 1: Target exists in between
    vector<char> letters1 = {'c', 'f', 'j'};
    char target1 = 'a';
    // Expected Output: 'c'

    // Test Case 2: Target is equal to an element
    vector<char> letters2 = {'c', 'f', 'j'};
    char target2 = 'c';
    // Expected Output: 'f' (Must be strictly greater)

    // Test Case 3: Wrap-around case
    vector<char> letters3 = {'c', 'f', 'j'};
    char target3 = 'z';
    // Expected Output: 'c' ('z' is larger than all elements, wrap around to start)

    cout << "Test Case 1: '" << sol.nextGreatestLetter(letters1, target1) << "' (Expected: 'c')" << endl;
    cout << "Test Case 2: '" << sol.nextGreatestLetter(letters2, target2) << "' (Expected: 'f')" << endl;
    cout << "Test Case 3: '" << sol.nextGreatestLetter(letters3, target3) << "' (Expected: 'c')" << endl;

    return 0;
}