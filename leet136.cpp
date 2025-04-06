#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

#define ll long long
using namespace std;
int singleNumber(vector<int> &nums)
{
    int result = 0;

    for (size_t i = 0; i < nums.size(); i++)
    {
        result = result ^ nums[i];
    }
    return result;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int n, x;
    vector<int> nums;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> x;
        nums.push_back(x);
    }

    int result = singleNumber(nums);
    cout << result;

    return 0;
}