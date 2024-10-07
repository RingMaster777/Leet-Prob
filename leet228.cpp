#include <bits/stdc++.h>
using namespace std;

vector<string> summaryRanges(vector<int> nums)
{
    vector<string> result;
    int uperLimit = nums[0];
    int lowerLimit = nums[0];
    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] == nums[i + 1] - 1)
        {
            lowerLimit++;
        }
        else
        {
            result.push_back(to_string(uperLimit) + "->" + to_string(lowerLimit));
            uperLimit = nums[i + 1];
            lowerLimit = nums[i + 1];
        }
    }
    return result;
}

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    vector<int> nums = {0, 5};
    vector<string> res = summaryRanges(nums);

    for (auto x : res)
    {
        cout << x << endl;
    }
}