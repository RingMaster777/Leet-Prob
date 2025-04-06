#include <iostream>
using namespace std;

#define ll long long

void solve()
{
    ll x, y, a, b;
    cin >> x >> y >> a >> b;
    ll m = min(x, y);

    ll result = 0;
    if (2 * a > b)
    {
        x -= m;
        y -= m;
        result = m * b;
    }
    result += (x + y) * a;
    cout << result << endl;
}
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        solve();
    }
    return 0;
}
