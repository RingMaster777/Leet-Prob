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
    int n, k, evenCount = 0, minElem = INF_INT;
    cin >> n >> k;
    vector<int> store(n);

    for (ll i = 0; i < n; i++)
    {
        cin >> store[i];

        if (store[i] % 2 == 0)
        {
            evenCount++;
        }

        if (store[i] % k == 0)
            minElem = 0;
        else
            minElem = min((k - (store[i] % k)), minElem);
    }

    if (k != 4)
    {
        cout << minElem << endl;
    }
    else
    {
        if (evenCount >= 2)
            cout << 0 << endl;
        else if (evenCount == 1)
            cout << min(minElem, 1) << endl;
        else
            cout << min(minElem, 2) << endl;
    }
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
