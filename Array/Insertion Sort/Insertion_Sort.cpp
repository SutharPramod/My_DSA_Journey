#include <iostream>

using namespace std;

void Insertion_Sort(int arr[] , int n){
    for(int i = 1 ; i < n ; i++){
        int curr = arr[i] , prev = i - 1;
        while (prev >= 0 && arr[prev] > curr)
        {
            arr[prev + 1] = arr[prev];
            prev--;
        }
        arr[prev + 1] = curr;
    }
}

int main(){
    int arr[] = {5,7,3,6,1,5,3,2};
    int n = sizeof(arr) / sizeof(arr[0]);
    Insertion_Sort(arr,n);
    for(int i : arr)
        cout << i << " ";
    return 0;
}