#include <bits/stdc++.h>
using namespace std;

long squareRoot(long nums)
{
    long result;
    long l = 1, r = nums, mid = -1;

    while (l <= r)
    {
        mid = (l + r) / 2;
        if (mid * mid > nums)
        {
            r = mid - 1;
        }
        else if (mid * mid == nums)
        {
            return floor(mid);
        }
        else
        {
            l = mid + 1;
        }
    }
    return floor(r);
}

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    long n = 0;
    long res = squareRoot(n);
    cout << res << endl;
}