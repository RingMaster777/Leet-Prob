#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <map>

#define ll long long
using namespace std;

string integerToRoman(int num)
{

    map<int, string> itr;

    itr[1] = "I";
    itr[4] = "IV";
    itr[5] = "V";
    itr[9] = "IX";
    itr[10] = "X";
    itr[40] = "XL";
    itr[50] = "L";
    itr[90] = "XC";
    itr[100] = "C";
    itr[400] = "CD";
    itr[500] = "D";
    itr[900] = "CM";
    itr[1000] = "M";
    string result = "";
    int hold = 0;
    for (std::map<int, std::string>::reverse_iterator it = itr.rbegin(); it != itr.rend(); ++it)
    {

        if (num / (it->first))
        {
            hold = num / it->first;
            num = num % it->first;
            while (hold != 0)
            {
                result += it->second;
                hold--;
            }
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

    int num;
    cin >> num;
    string result = integerToRoman(num);

    cout << result;

    return 0;
}
