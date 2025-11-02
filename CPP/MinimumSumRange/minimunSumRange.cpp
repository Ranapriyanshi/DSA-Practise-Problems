#include <bits/stdc++.h>
using namespace std;

void getSum(vector<int> &nums, int sum, int n, vector<int> &arr, vector<vector<int>> &ans)
{
    for (int start = 0; start < n; start++){
        for (int end = start; end < n; end++){
            for (int i = start; i <= end; i++){
                arr.push_back(nums[i]);
            }
            ans.push_back(arr);
            arr.clear();
        }
    }
}

int main()
{
    int n;
    cin >> n;
    vector<int> nums;
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }
    int sum = 0;
    vector<int> arr;
    vector<vector<int>> ans;
    getSum(nums, 0, n, arr, ans);
    for (int i = 0; i < ans.size(); i++)
    {
        for (int j = 0; j < ans[i].size(); j++)
        {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
