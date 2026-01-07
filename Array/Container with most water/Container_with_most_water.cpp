#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int max_water(vector<int> prices){
    int maxw = 0,st = 0 , end = prices.size() - 1;

    while(st < end){
        int w = (end-st) * min(prices[st],prices[end]);
        maxw = max(maxw,w);

        if(st < end) st++;
        else end--;
    }

    return maxw;
}

int main()
{
    vector<int> nums = {1,8,6,2,5,4,8,3,7};
    cout << "Maximum Water area : " << max_water(nums);

    return 0;
}