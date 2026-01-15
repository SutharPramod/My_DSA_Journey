#include <iostream>
using namespace std;

void Bubble_Sort(int arr[],int n){
    for(int i = 0 ; i < n ; i++){
        bool flag = false;
        for(int j = 0 ; j < n - i - 1 ; j++){
            if(arr[j] > arr[j + 1]){
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                flag = true;
            }
        }
        if(!flag) return;
    }
}

int main(){
    int arr[] = {1,5,3,7,9,1};
    int n = sizeof(arr) / sizeof(arr[0]);
    for(int i = 0 ; i < n ; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    Bubble_Sort(arr,n);
    for(int i = 0 ; i < n ; i++){
        cout << arr[i] << " ";
    }
    return 0;
}