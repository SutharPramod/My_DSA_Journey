#include <iostream>
#include <algorithm>
using namespace std;

void Selection_Sort(int arr[],int n){

    for(int i = 0 ; i < n ; i++){
        int minI = i;
        for(int j = i + 1 ; j < n ; j++){
            if(arr[j] < arr[minI]){
                minI = j;
            }
        }
        swap(arr[i],arr[minI]);
    }
}

int main(){
    int arr[] = {4,6,2,6,3,-1,7,3,1,0};
    int n = sizeof(arr) / sizeof(arr[0]);
    Selection_Sort(arr,n);
    for(int i : arr) cout << i << " " ;
    return 0;
}