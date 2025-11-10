#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        v.push_back(a);
    }
    int target;
    cin >> target;

    int ans = -1;
    int low = 0, high = n - 1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (v[mid] == target)
        {
            ans = mid;
            return ans;
        }
        else if (v[mid] < target)
            low = mid + 1;
        else
            high = mid - 1;
    }

    return ans;
}