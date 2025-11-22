#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void getSubarray(vector<int>& nums, vector<vector<int>>& ans, vector<int>& arr, int index){
    if(index >= nums.size()){
        ans.push_back(arr);
        return;
    }
    for(int i=index;i<nums.size();i++){
        arr.push_back(nums[i]);
        getSubarray(nums,n, arr, ans, index+1);
        arr.pop_back();
    }
}

int main() {
    int n;
    cin>>n;
    vector<int>nums;
    for(int i=0l;i<n;i++){
    int num;
    cin >>num;
    nums.push_back(num);
    }
    vector<vector<int>>ans;
    vector<int>arr;
    int index =0;
    getSubarray(nums, arr, ans, index);

}
