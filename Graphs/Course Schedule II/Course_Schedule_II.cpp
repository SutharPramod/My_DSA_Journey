#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

class Solution {
public:
    vector<int> ans;
    bool isCycle(int src , vector<int> &state , vector<vector<int>>& prerequisites){
        state[src] = 1; // currently visiting

        for(int i = 0 ; i < prerequisites.size() ; i++){
            if(prerequisites[i][0] == src){
                if(state[prerequisites[i][1]] == 1) return true;
                else if(state[prerequisites[i][1]] == 0 && isCycle(prerequisites[i][1], state , prerequisites)) return true;
            }
        }
        state[src] = 2;
        ans.push_back(src);
        return false;
    }

    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {
        vector<int> state(numCourses,0);
        ans.clear();
        for(int i = 0 ; i < numCourses ; i++){
            if(state[i] == 0) {
                if(isCycle(i , state , prerequisites)) return {};
            }
        }
        return ans;
    }
};

/**
 * Helper function to print the result vector
 */
void printOrder(const vector<int>& order) {
    if (order.empty()) {
        cout << "[] (Impossible to finish all courses)" << endl;
        return;
    }
    cout << "[";
    for (int i = 0; i < order.size(); ++i) {
        cout << order[i] << (i == order.size() - 1 ? "" : ", ");
    }
    cout << "]" << endl;
}

int main() {
    Solution sol;

    // Test Case 1: Simple linear dependency
    // 2 courses, [1, 0] means 0 -> 1
    int n1 = 2;
    vector<vector<int>> pre1 = {{1, 0}};

    // Test Case 2: Multiple valid paths
    // 4 courses, [1,0], [2,0], [3,1], [3,2]
    int n2 = 4;
    vector<vector<int>> pre2 = {{1, 0}, {2, 0}, {3, 1}, {3, 2}};

    // Test Case 3: Impossible (Cycle)
    int n3 = 2;
    vector<vector<int>> pre3 = {{1, 0}, {0, 1}};

    cout << "Test Case 1: ";
    printOrder(sol.findOrder(n1, pre1)); // Expected: [0, 1]

    cout << "Test Case 2: ";
    printOrder(sol.findOrder(n2, pre2)); // Expected: [0, 1, 2, 3] or [0, 2, 1, 3]

    cout << "Test Case 3: ";
    printOrder(sol.findOrder(n3, pre3)); // Expected: []

    return 0;
}