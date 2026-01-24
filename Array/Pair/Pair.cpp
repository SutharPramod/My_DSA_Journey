#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

bool customComparator(const pair<int, int> &a, const pair<int, int> &b) {
    if (a.second != b.second) {
        return a.second > b.second; 
    }
    return a.first < b.first;      
}

int main() {
    
    vector<pair<int, int>> students = {
        {101, 85}, {105, 92}, {103, 78}, {102, 92}
    };

    
    sort(students.begin(), students.end(), customComparator);

    
    cout << "Rank | Roll No | Marks" << endl;
    cout << "----------------------" << endl;
    for (int i = 0; i < students.size(); i++) {
        cout << i + 1 << "    | " << students[i].first 
             << "     | " << students[i].second << endl;
    }

    return 0;
}