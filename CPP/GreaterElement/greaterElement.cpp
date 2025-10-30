// #include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        v.push_back(a);
    }
    int m;
    cin >> m;
    vector<int> v2;
    for (int i = 0; i < m; i++)
    {
        int a;
        cin >> a;
        v2.push_back(a);
    }
    int max = 0;
    for (int i = 0; i < m; i++)
    {
        max = v2[i];
    }
    bool a = true;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (v[i] == v2[j] && v[i] < max)
            {
                for (int k = j + 1; k < m; k++)
                {
                    if (v2[k] > v2[j])
                    {
                        cout << v2[k] << " ";
                        break;
                    }
                    else
                        a = false;
                }
                if (a == false)
                {
                    cout << "-1" << " ";
                    break;
                }
            }
            else if (v[i] == v2[j] && v[i] >= max)
            {
                cout << -1 << " ";
                break;
            }
        }
    }
}