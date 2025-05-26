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
    string n;
    cin >> n;

    ll zC = count(n.begin(), n.end(), '0'), oC = n.size() - zC;

    ll i = 0;
    for (i = 0; i < n.size(); i++)
    {
        if (n[i] == '0')
        {
            if (oC)
            {
                oC--;
            }
            else
            {
                break;
            }
        }
        else
        {
            if (zC)
            {
                zC--;
            }
            else
            {
                break;
            }
            // cout << "Hello" << oC << " " << zC << endl;
        }
    }
    cout << n.size() - i << endl;
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
