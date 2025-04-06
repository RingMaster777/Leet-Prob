#include <bits/stdc++.h>

#define ll long long
using namespace std;

int removeDuplicates(vector<int> &nums)
{

    int m = 2;

    if (nums.size() <= 2)
        return 2;

    for (int i = 2; i < nums.size(); i++)
    {

        if (nums[m - 2] != nums[i])
        {
            nums[m] = nums[i];
            m++;
        }
    }

    for (int i = 0; i < nums.size(); i++)
    {
        cout << nums[i] << " ";
    }

    return m;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    vector<int> nums;
    int x, n;

    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        nums.push_back(x);
    }

    removeDuplicates(nums);

    return 0;
}