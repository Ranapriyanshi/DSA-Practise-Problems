#include <bits/stdc++.h>
#include <algorithm>
#include <cmath>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int>nums;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        nums.push_back(a);
    }
    sort(nums.begin(), nums.end());
    while(next_permutation(nums.begin(), nums.end())){
        for(int i=0;i<nums.size();i++){
            cout << nums[i]<<" ";
        }
        cout <<endl;
    }
}