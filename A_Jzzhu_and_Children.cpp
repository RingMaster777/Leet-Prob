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
    ll n, m, x = 0, round = 0, maxRound = 0;
    cin >> n >> m;

    int a[100];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        round = (a[i] + m - 1) / m;

        if (round >= maxRound)
        {
            maxRound = round;
            x = i + 1;
        }
    }

    cout << x << endl;
}

int main()
{
    fastio;
    int t = 1; // Default to one test case
    // cin >> t;  // If there are multiple test cases
    while (t--)
    {
        solve();
    }

    return 0;
}
