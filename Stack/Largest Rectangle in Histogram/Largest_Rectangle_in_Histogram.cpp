#include <iostream>
#include <vector>
#include <stack>
#include <algorithm>
using namespace std;

class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        stack<int> s;
        int area = heights[0];

        s.push(0);
        for(int i = 0 ; i <= heights.size() ; i++){
            int currh = (i==heights.size()) ? 0 : heights[i];
            while(!s.empty() && heights[s.top()] >= heights[i]){
                int h = heights[s.top()];
                s.pop();

                int w = s.empty() ? i : i - s.top() - 1;
                area = max(area, h * w);
            }
            s.push(i);
        }
        return area;
    }
};

void testHistogram(vector<int> heights) {
    Solution sol;
    cout << "Heights: ";
    for (int h : heights) cout << h << " ";
    cout << "\nMax Area: " << sol.largestRectangleArea(heights) << endl << endl;
}

int main() {
    
    testHistogram({15, 0, 0, 6, 2, 3});

    testHistogram({2, 4});

    return 0;
}
