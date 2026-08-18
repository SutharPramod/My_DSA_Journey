#include <iostream>
#include <vector>

using namespace std;

class MountainArray {
private:
    vector<int> arr;
    int callCount = 0;

public:
    MountainArray(vector<int> a) : arr(a) {}

    int get(int index) {
        callCount++;
        return arr[index];
    }

    int length() {
        return arr.size();
    }

    int getCallCount() const {
        return callCount;
    }
};

class Solution {
public:
    int bs(int target, MountainArray& mountainArr, int s, int e) {
        while (s <= e) {
            int m = s + (e - s) / 2;
            int n = mountainArr.get(m);
            if (n == target) {
                return m;
            } else if (n > target) {
                e = m - 1;
            } else {
                s = m + 1;
            }
        }
        return -1;
    }

    int findInMountainArray(int target, MountainArray& mountainArr) {
        int s = 1, e = mountainArr.length() - 2;
        int idx = -1;
        while (s <= e) {
            int m = s + (e - s) / 2;
            int curr = mountainArr.get(m);
            int prev = mountainArr.get(m - 1);
            int next = mountainArr.get(m + 1);

            if (curr > prev && curr > next) {
                idx = m;
                break;
            } else if (prev > curr) {
                e = m - 1;
            } else {
                s = m + 1;
            }
        }

        int c1 = bs(target, mountainArr, 0, idx);
        int c2 = -1;

        s = idx + 1, e = mountainArr.length() - 1;
        while (s <= e) {
            int m = s + (e - s) / 2;
            int n = mountainArr.get(m);
            if (n == target) {
                c2 = m;
                break;
            } else if (n < target) {
                e = m - 1;
            } else {
                s = m + 1;
            }
        }

        if (c1 != -1 && c2 != -1)
            return min(c1, c2);

        return max(c1, c2);
    }
};

int main() {
    Solution sol;

    // Test Case 1
    MountainArray ma1({1, 2, 3, 4, 5, 3, 1});
    int target1 = 3;
    int idx1 = sol.findInMountainArray(target1, ma1);
    cout << "Test Case 1: Index = " << idx1 << " (Expected: 2), API Calls = " << ma1.getCallCount() << endl;

    // Test Case 2
    MountainArray ma2({0, 1, 2, 4, 2, 1});
    int target2 = 3;
    int idx2 = sol.findInMountainArray(target2, ma2);
    cout << "Test Case 2: Index = " << idx2 << " (Expected: -1), API Calls = " << ma2.getCallCount() << endl;

    return 0;
}