#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

#define ll long long
using namespace std;

int strStr(string haystack, string needle)
{

    int index = haystack.find(needle);
    return index;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    string haystack, needle;

    cin >> haystack >> needle;
    int result = strStr(haystack, needle);
    cout << result;
    return 0;
}