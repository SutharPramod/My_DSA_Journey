#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<vector<string>> items = {{"phone", "blue", "pixel"}, {"computer", "silver", "phone"}, {"phone", "gold", "iphone"}};
    string ruleKey = "type", ruleValue = "phone";
    int n = items.size();
    int idx;
    if (ruleKey == "type")
        idx = 0;
    if (ruleKey == "color")
        idx = 1;
    if (ruleKey == "name")
        idx = 2;
    int cnt = 0;
    for (int i = 0; i < items.size(); i++)
    {
        if (items[i][idx] == ruleValue)
            cnt++;
    }
    cout << "number of items that match : " << cnt;
    return 0;
}