#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <unordered_map>

#define ll long long
using namespace std;

bool containsNearbyDuplicate(vector<int> &nums, int k)
{

    unordered_map<int, int> m;
    for (int i = 0; i < nums.size(); i++)
    {
        if (m.find(nums[i]) != m.end())
        {
            cout << nums[i] << i << endl;
            if (abs(m[nums[i]] - i) <= k)
            {
                return true;
            }
        }
        m[nums[i]] = i;
    }
    return false;
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
    int k;
    cin >> k;

    cout << containsNearbyDuplicate(nums, k);

    return 0;
}