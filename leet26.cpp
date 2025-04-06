#include <bits/stdc++.h>

#define ll long long
using namespace std;

int removeDuplicate(vector<int> &nums)
{

    int m = 1;

    // result.push_back(nums[0]);
    for (int i = 1; i < nums.size(); i++)
    {
        if (nums[m - 1] != nums[i])
        {
            nums[m] = nums[i];
            m++;
        }
    }

    // std::copy(result.begin(), result.end(), nums.begin());
    for (int i = 0; i < nums.size(); i++)
    {
        cout << nums[i];
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

    cout << removeDuplicate(nums);

    return 0;
}