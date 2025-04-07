#include <iostream>
using namespace std;

#define ll long long

void solve()
{
    ll n, x, count = 0;
    cin >> n >> x;

    for (int i = 1; i <= n; i++)
    {
        if (x % i == 0)
        {
            if (x / i <= n)
            {
                count++;
            }
        }
    }

    cout << count << endl;
}
int main()
{
    solve();
}