#include <bits/stdc++.h>
using namespace std;

int hammingWeight(int n)
{
    int count = 0;

    for (int i = 0; i < sizeof(n) * 8; i++)
    {
        if (n & (1 << i))
            count++;
    }

    return count;
}

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int a;
    cin >> a;
    int res = hammingWeight(a);
    cout << res << endl;
}