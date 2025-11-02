#include <bits/stdc++.h>
using namespace std;
#include <algorithm>
#include <climits>
#include <cmath>

int calArea(vector<int>& arr, int n){
    stack<pair<int, int >> st;
    int maxArea = INT_MIN;
    for(int i=0;i<n;i++){
        int idx = i;
        while(!st.empty() && st.top().first > arr[i]){
            int area = st.top().first * (i-st.top().second);
            maxArea = max(maxArea, area);
            idx = st.top().second;
            st.pop();
        }
        st.push({arr[i], idx});

    }
    while(!st.empty()){
        int area = st.top().first * (n - st.top(). second);
        maxArea = max(maxArea, area);
        st.pop();
    }

    return maxArea;
}


int main(){
    int n;
    cin >>n;
    vector<int>arr;
    for(int i=0;i<n;i++){
        int a;
        cin >>a;
        arr.push_back(a);
    }
    cout << calArea(arr, arr.size());
}