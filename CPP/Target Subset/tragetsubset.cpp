#include <bits/stdc++.h>
using namespace std;
void targetFind(vector<int>&arr, vector<vector<int>>&ans, vector<int>& nums, int target, int index){
    if(target==0){
        ans.push_back(arr);
        return;
    }
    for(int i=index;i<nums.size();i++){
        if(i> index && nums[i] == nums[i-1]) continue;
        if(nums[i]>target) break;
        arr.push_back(nums[i]);
        targetFind(arr, ans, nums, target-nums[i], i+1);
        arr.pop_back();
    }
    
}
int main(){
    int n;
    cin >>n;
    vector<int>nums;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        nums.push_back(a);
    }
    int t;
    cin >>t;
    int index=0;
    vector<int>arr;
    vector<vector<int>>ans;
    sort(nums.begin(), nums.end());
    targetFind(arr, ans, nums, t, index);

    for(int i=0;i<ans.size();i++){
        for(int j=0;j<ans[i].size();j++){
            cout <<ans[i][j]<<" ";
        }
        cout <<endl;
    }

}