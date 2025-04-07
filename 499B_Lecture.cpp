#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve()
{
    ll n, m;
    cin >> n >> m;

    string x, y;

    std::unordered_map<string, string> wordMap;

    std::vector<std::pair<std::pair<std::string, int>, std::pair<std::string, int>>> storageList;

    for (ll i = 0; i < m; i++)
    {
        cin >> x >> y;

        if (x.length() <= y.length())
        {
            wordMap[x] = x;
            wordMap[y] = x;
        }
        else
        {
            wordMap[x] = y;
            wordMap[y] = y;
        }
    }

    for (ll i = 0; i < n; i++)
    {
        cin >> x;
        cout << wordMap[x] << " ";
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    solve();
    return 0;
}
