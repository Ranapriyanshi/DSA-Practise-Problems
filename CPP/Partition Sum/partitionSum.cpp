#include <bits/stdc++.h>
using namespace std;

bool partitionSubarray(vector<int>& nums, int maxSum, int index, int currSum){
    if(maxSum%2!=0) return false;

    int target = maxSum / 2;
    if (currSum == target) return true;
    if (currSum > target || index == nums.size()) return false;


    if(partitionSubarray(nums, maxSum, index+1, currSum+nums[index])) return true;;

    return partitionSubarray(nums, maxSum, index+1, currSum);
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
    int maxSum =0;
    for(int i=0;i<n;i++){
        maxSum+= nums[i];
    }

    sort(nums.begin(), nums.end());

    cout << partitionSubarray(nums, maxSum, 0,0);


}