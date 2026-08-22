#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
vector<int> counts;

    void merge(vector<pair<int,int>> &arr , int s , int m , int e){
        vector<pair<int,int>> t;
        int i = s , j = m + 1;
        int rcnt = 0;

        while(i <= m && j <= e){
            if(arr[i].first <= arr[j].first){
                counts[arr[i].second] += rcnt;
                t.push_back({arr[i].first, arr[i++].second});
            }else{
                rcnt++;
                t.push_back({arr[j].first, arr[j++].second});
            }
        }

        while(i <= m){
            counts[arr[i].second] += rcnt;
            t.push_back({arr[i].first, arr[i++].second});
        }

        while(j <= e){
            t.push_back({arr[j].first, arr[j++].second});
        }

        for(int p = 0 ; p < t.size() ; p++){
            arr[s + p] = t[p];
        }
    }

    void mergeSort(vector<pair<int,int>> &arr , int s , int e){
        if(s >= e) return;

        int mid  = s + (e - s)/2;

        mergeSort(arr , s , mid); 
        mergeSort(arr , mid + 1, e); 

        merge(arr,s,mid,e);
    }
    
    vector<int> countSmaller(vector<int>& nums) {
        int n = nums.size();
        counts.assign(n , 0);

        vector<pair<int,int>> arr(n);

        for(int i = 0 ; i < n ; i++){
            arr[i] = {nums[i],i};
        }

        mergeSort(arr , 0 , arr.size() - 1);

        return counts;
    }
};

int main() {
    Solution sol;

    // Test Case 1
    vector<int> nums1 = {5, 2, 6, 1};
    vector<int> res1 = sol.countSmaller(nums1);
    cout << "Test Case 1: [ ";
    for (int c : res1) cout << c << " ";
    cout << "] (Expected: [2, 1, 1, 0])" << endl;

    // Test Case 2
    vector<int> nums2 = {-1, -1};
    vector<int> res2 = sol.countSmaller(nums2);
    cout << "Test Case 2: [ ";
    for (int c : res2) cout << c << " ";
    cout << "] (Expected: [0, 0])" << endl;

    return 0;
}