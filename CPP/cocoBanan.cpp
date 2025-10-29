#include <climits>
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

int time_to_eat_bananas(int arr[], int n, double s){
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=ceil(arr[i]/s);
    }

    return sum;
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>> arr[i];
    }

    int h;
    cin >>h;
    int m =INT_MIN;
    for(int i=0;i<n;i++){
        m = max(m, arr[i]);
    }
    int low=0;
    int high = m;
    int ans;

    while(low<=high){
        int mid = (low+high)/2;
        if(time_to_eat_bananas(arr, n, mid)<=h){
            ans = mid;
            high = mid-1;
        }
        else low = mid+1;
    }

    cout <<ans;

}