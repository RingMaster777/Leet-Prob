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
    ll n, a, b;
    cin >> n >> a >> b;
    // Example input/output
    ll h = b + 1;

    if (n - h < a)
    {
        h = h - (a - (n - h));
    }

    cout << h;
}

int main()
{
    int t = 1; // Default to one test case
    // cin >> t;  // If there are multiple test cases
    while (t--)
    {
        solve();
    }

    return 0;
}
