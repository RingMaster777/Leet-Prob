#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
#define vi vector<int>
#define vll vector<long long>
#define pii pair<int, int>
#define pll pair<long long, long long>
#define mp make_pair
#define pb push_back
#define fi first
#define se second
#define all(x) (x).begin(), (x).end()
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);

const ll MOD = 1e9 + 7;
const ll INF = LLONG_MAX;
const int INF_INT = INT_MAX;

void solve()
{
    // Your problem-solving logic goes here
    ll n, k;
    cin >> n >> k;

    string s;
    cin >> s;

    ll wCount = 0, minW = INT_MAX;
    // Example input/output
    for (int i = 0; i <= s.size() - k; i++)
    {
        for (int j = i; j < k + i; j++)
        {
            if (s[j] == 'W')
                wCount++;
        }
        minW = min(wCount, minW);
        wCount = 0;
    }
    cout << minW << endl;
}

void solve()
{
    ll n, k;
    cin >> n >> k;

    string s;
    cin >> s;

    ll wCount = 0, minW = INT_MAX;

    // Count W's in the first window
    for (int i = 0; i < k; i++)
    {
        if (s[i] == 'W')
            wCount++;
    }
    minW = wCount;

    // Sliding window
    for (int i = k; i < n; i++)
    {
        if (s[i - k] == 'W')
            wCount--;
        if (s[i] == 'W')
            wCount++;
        minW = min(minW, wCount);
    }

    cout << minW << '\n';
}

int main()
{
    fastio;
    int t = 1; // Default to one test case
    cin >> t;  // If there are multiple test cases
    while (t--)
    {
        solve();
    }
    return 0;
}
