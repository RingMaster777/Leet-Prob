#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <stack>

#define ll long long
using namespace std;

bool isValid(string s)
{

    stack<char> st;
    for (int i = 0; i < s.size(); i++)
    {

        if (s[i] == '(' || s[i] == '{' || s[i] == '[')
        {
            st.push(s[i]);
        }
        else if (st.empty() && (s[i] == ')' || s[i] == '}' || s[i] == ']'))
        {
            cout << "hello";
            return false;
        }
        else
        {
            if (st.top() == '(' && s[i] != ')')
            {
                return false;
            }
            else if (st.top() == '{' && s[i] != '}')
            {
                return false;
            }
            else if (st.top() == '[' && s[i] != ']')
            {
                return false;
            }
            else
            {
                st.pop();
            }
        }
    }
    if (st.empty())
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    string s;
    cin >> s;
    isValid(s);

    cout << isValid(s);
    return 0;
}

// [{()}]