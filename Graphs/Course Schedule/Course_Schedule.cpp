#include <iostream>
#include <vector>
#include <queue>

using namespace std;

class Solution {
public:
    bool isCycle(int src , vector<int> &state , vector<vector<int>>& prerequisites){
        state[src] = 1; // currently visiting

        for(int i = 0 ; i < prerequisites.size() ; i++){
            if(prerequisites[i][0] == src){
                if(state[prerequisites[i][1]] == 1) return true;
                else if(state[prerequisites[i][1]] == 0 && isCycle(prerequisites[i][1], state , prerequisites)) return true;
            }
        }
        state[src] = 2;
        return false;
    }
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        vector<int> state(numCourses,0);

        for(int i = 0 ; i < numCourses ; i++){
            if(state[i] == 0) {
                if(isCycle(i , state , prerequisites)) return false;
            }
        }

        return true;
    }
};

int main() {
    Solution sol;

    // Test Case 1: Possible to finish
    // 2 courses, 1 depends on 0 [1, 0]
    int n1 = 2;
    vector<vector<int>> pre1 = {{1, 0}};

    // Test Case 2: Impossible (Cycle)
    // 2 courses, 0 depends on 1, 1 depends on 0
    int n2 = 2;
    vector<vector<int>> pre2 = {{1, 0}, {0, 1}};

    // Test Case 3: More complex DAG
    int n3 = 4;
    vector<vector<int>> pre3 = {{1, 0}, {2, 0}, {3, 1}, {3, 2}};

    cout << "Test Case 1: " << (sol.canFinish(n1, pre1) ? "Possible" : "Impossible") 
         << " (Expected: Possible)" << endl;
    
    cout << "Test Case 2: " << (sol.canFinish(n2, pre2) ? "Possible" : "Impossible") 
         << " (Expected: Impossible)" << endl;

    cout << "Test Case 3: " << (sol.canFinish(n3, pre3) ? "Possible" : "Impossible") 
         << " (Expected: Possible)" << endl;

    return 0;
}