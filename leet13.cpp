#include <bits/stdc++.h>
using namespace std;
#define ll long long

int romanToInt(string s)
{
    unordered_map<char, int> rti;

    rti['I'] = 1;
    rti['V'] = 5;
    rti['X'] = 10;
    rti['L'] = 50;
    rti['C'] = 100;
    rti['D'] = 500;
    rti['M'] = 1000;

    int result = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (rti[s[i]] >= rti[s[i + 1]])
        {
            result += rti[s[i]];
        }
        else
        {
            result += (rti[s[i + 1]] - rti[s[i]]);
        }
    }

    return result;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    string s;
    cin >> s;
    int res = romanToInt(s);
    cout << res;
    return 0;
}