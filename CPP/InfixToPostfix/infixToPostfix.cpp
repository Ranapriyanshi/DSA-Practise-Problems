#include <bits/stdc++.h>
using namespace std;

int precedence(char c)
{
    if (c == '^')
        return 3;
    else if (c == '*' || c == '/')
        return 2;
    else if (c == '+' || c == '-')
        return 1;
    else
        return -1;
}

string postfix(string s)
{
    stack<int> st;
    string ref;

    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z' || s[i] >= 'A' && s[i] <= 'Z')
            ref += s[i];
        else if (s[i] == '(')
            st.push(s[i]);
        else if (s[i] == ')')
        {
            while (!st.empty() && st.top() != '(')
            {
                ref += st.top();
                st.pop();
            }
            if (!st.empty())
                st.pop();
        }
        else
        {
            while (!st.empty() && precedence(st.top()) > precedence(s[i]))
            {
                ref += st.top();
                st.pop();
            }
            st.push(s[i]);
        }
    }
    while (!st.empty())
    {
        ref += st.top();
        st.pop();
    }
    return ref;
}

int main()
{
    string s;
    s = "a+b*c";
    cout << postfix(s);
}