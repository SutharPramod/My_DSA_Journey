#include <iostream>
#include <vector>
using namespace std;

void Merge_Sorted_Array(vector<int> &nums1 , int n , vector<int> &nums2 , int m){
    int idx = n - 1, i = n - m - 1 , j = m - 1;

    while (i >= 0 && j >= 0)
    {
        if(nums1[i] > nums2[j]) {
            nums1[idx] = nums1[i];
            idx--;
            i--;
        }
        else{
            nums1[idx] = nums2[j];
            idx--;
            j--;
        }
    }
    while (i >= 0)
    {
        nums1[idx] = nums1[i];
        idx--;
        i--;
    }
    while (j >= 0)
    {
        nums1[idx] = nums2[j];
        idx--;
        j--;
    }   
}
int main()
{
    vector<int> nums1 = {1, 2, 3, 0, 0, 0};
    int n = nums1.size();
    vector<int> nums2 = {4, 5, 6};
    int m = nums2.size();
    Merge_Sorted_Array(nums1,n,nums2,m);
    for(int i : nums1){
        cout << i <<" "; 
    }
    return 0;
}