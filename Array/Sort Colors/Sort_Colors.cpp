#include <iostream>
#include <vector>
using namespace std;

void Sort_Colors(vector<int> &colors){
    int end = colors.size() -1 , st = 0 , mid = 0;

    while (mid <= end)
    {
        if(colors[mid] == 0){
            swap(colors[mid],colors[st]);
            st++;
            mid++;
        }
        else if(colors[mid] == 1){
            mid++;
        }
        else{
            swap(colors[mid],colors[end]);
            end--;
        }
    }
}

int main(){
    vector<int> colors = {0,1,1,2,1,2,0,0,1,2};
    Sort_Colors(colors);

    for(int i : colors)
        cout << i << " ";
    return 0;
}