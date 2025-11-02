#include<bits/stdc++.h>
#include <algorithm>
using namespace std;

int main(){
    int n;
    cin >>n;
    vector<int>arr;
    vector<int>arr2;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        arr.push_back(a);
        arr2.push_back(a);
    }

    reverse(arr.begin(), arr.end());
    if(arr == arr2){
        cout <<"true";
    }
    else {
        cout << "false";
    }

}
