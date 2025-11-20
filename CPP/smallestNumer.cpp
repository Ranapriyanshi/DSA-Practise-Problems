#include <iostream>
#include <stack>
#include <vector>
using namespace std;
int main (){
    int k;
    cin >>k;
    vector<int>nums;
    int n = nums.size();
    // [10200]
    for(int i=0;i<n;i++){
        int a;
        cin >>a;
        nums.push_back(a);
    }
    stack<int>st;
    for(int i=0;i<n;i++){
        while(!st.empty() && st.top()<nums[i]){
            st.pop();
        }
        if(st.size() < nums.size()-k){
            st.push(nums[i]);
        }
    }

    for(int i=0;i<st.size();i++){
        cout <<st[i];
    }


}