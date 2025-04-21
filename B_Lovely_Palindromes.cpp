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
    // this will not work if the n is huge   n (1 ≤ n ≤ 10100 000).
    // for huge n you will have to solve it using n as string and reverse then concat it
    ll n;
    cin >> n;

    ll temp = n, count = 0, rev = 0;

    while (temp != 0)
    {
        count++;

        rev *= 10;
        rev += (temp % 10);
        temp /= 10;
    }

    rev += (n * pow(10, count));
    cout << rev << endl;
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
