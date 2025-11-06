#include <bits/stdc++.h>
#include <vector>
#include <algorithm>
#include <cmath>
#include <climits>
using namespace std;

void subarrays(vector<vector<int>>& ans, vector<int>& arr, vector<int>& nums){
    int n = nums.size();
    for(int start =0; start<n;start++){
        for(int end=start; end <n;end++){
            for(int i= start; i<=end; i++){
                arr.push_back(nums[i]);
            }
            ans.push_back(arr);
            arr.clear();
        }
    }
}

int main(){
    int n;
    cin >>n;
    vector<int> nums;
    for(int i=0;i<n;i++){
        int a;
        cin >>a;
        nums.push_back(a);
    }

    vector<int>arr;
    vector<vector<int>>ans;
    subarrays(ans, arr, nums);
    int range =0;
    for(int i=0;i<ans.size(); i++){
        sort(ans.begin(), ans.end());
        int r;
        int big = INT_MIN;
        int small = INT_MAX;
        for(int j=0;j<ans[i].size();j++){
            big = max(big, ans[i][j]);
            small = min(small, ans[i][j]);
        }
        r = big-small;
        range +=r;
    }
    cout <<range;
}