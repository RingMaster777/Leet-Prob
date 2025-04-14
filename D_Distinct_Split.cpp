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
    ll n, count = 0;
    string s;
    cin >> n >> s;
    ll l = s.size();

    unordered_map<char, int> left, right;
    ll maxCount = 2;

    for (char ch : s)
    {
        right[ch]++;
    }

    for (int i = 0; i < l - 1; i++)
    {
        left[s[i]] = 1;

        if (right[s[i]] == 1)
        {

            right.erase(s[i]);
        }
        else
        {
            right[s[i]]--;
        }

        maxCount = max(maxCount, ((ll)left.size() + (ll)right.size()));
    }

    cout << maxCount << endl;
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
