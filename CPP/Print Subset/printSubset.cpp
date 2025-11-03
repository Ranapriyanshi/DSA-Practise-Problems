#include <bits/stdc++.h>
using namespace std;

void recursion(int index, vector<int>& arr, vector<vector<int>>& ans, vector<int>& nums){
    if(index >= nums.size()){
        ans.push_back(arr);
        return;
    }

    arr.push_back(nums[index]);
    recursion(index+1, arr, ans, nums);
    arr.pop_back();
    recursion(index+1, arr, ans, nums);

}

int main(){
    int n;
    cin >>n;
    vector<int>nums;
    for(int i=0;i<n;i++){
        int a;
        cin >>a;
        nums.push_back(a);
    }
    int index=0;
    vector<int>arr;
    vector<vector<int>>ans;

    recursion(index, arr, ans, nums);
    sort(ans.begin(), ans.end());
    for(int i=0;i<ans.size();i++){
        for(int j=0;j<ans[i].size();j++)
        {
            cout<<ans[i][j]<<" ";
        }
        cout <<endl;
    }

}