#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int buy_sell_stock(vector<int> prices){
    int bb = prices[0],maxp = 0;
    for(int i: prices){
        if(i > bb){
            maxp = max(maxp,i - bb);
        }
        bb = min(bb,i);
    }
    return maxp;
}

int main()
{
    vector<int> nums = {7,1,5,3,6,4};
    cout << "Maximum Profit : " << buy_sell_stock(nums);

    return 0;
}