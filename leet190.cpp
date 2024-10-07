#include <bits/stdc++.h>
using namespace std;

int reverseBit(uint32_t n)
{
    uint32_t result = 0;

    for (int i = 0; i < 32; i++)
    {
        result <<= 1;
        result |= n & 1;
        n >>= 1;
    }

    return result;
}

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    uint32_t a;
    cin >> a;
    uint32_t res = reverseBit(a);
    cout << res << endl;
}