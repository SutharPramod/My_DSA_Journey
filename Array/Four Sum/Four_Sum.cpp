#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;

vector<vector<int>> Four_Sum(vector<int> nums, int target)
{
    vector<vector<int>> ans;
    sort(nums.begin(), nums.end());
    for (int m = 0; m < nums.size(); m++)
    {
        if (m > 0 && nums[m] == nums[m - 1])
                continue;
        for (int i = m + 1; i < nums.size(); i++)
        {
            if (i > m + 1 && nums[i] == nums[i - 1])
                continue;
            int j = i + 1, k = nums.size() - 1;
            while (j < k)
            {
                long long sum = (long long)nums[m] + nums[i] + nums[j] + nums[k];   
                if (sum == target)
                {
                    ans.push_back({nums[m],nums[i], nums[j], nums[k]});
                    while (j < k && nums[j] == nums[j + 1])
                        j++;
                    while (j < k && nums[k] == nums[k - 1])
                        k--;
                    j++;
                    k--;
                }
                else if (sum > target)
                {
                    k--;
                }
                else
                {
                    j++;
                }
            }
        }
    }
    return ans;
}

int main()
{
    vector<int> nums = {1,0,-1,0,-2,2};
    vector<vector<int>> ans = Four_Sum(nums, 0);
    for (auto i : ans)
    {
        for (auto j : i)
        {
            cout << j << " ";
        }
        cout << endl;
    }
    return 0;
}