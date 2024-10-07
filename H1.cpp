#include <bits/stdc++.h>
using namespace std;

void sumofList(vector<int> nums)
{
    int sum = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        sum += nums[i];
    }

    cout << sum;
}

int main()
{
    vector<int> nums = {1, 2, 3, 4, 4, 5};
    sumofList(nums);
    return 0;
}