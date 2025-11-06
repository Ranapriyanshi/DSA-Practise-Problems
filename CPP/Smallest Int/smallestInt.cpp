#include <bits/stdc++.h>
using namespace std;
string smallestInt(string s, int k){
    stack<char> st;
    string ans;
    for(int i=0;i<s.length();i++){
        if(!st.empty() && st.top()>s[i] && k--){
            st.pop();
        }
        st.push(s[i]);
    }
    while(!st.empty() && k--){
        st.pop();
    }
    while(!st.empty() ){
        ans+= st.top();
        st.pop();
    }
    while(true){
        if(ans[0] == '0'){
            ans.erase(0,1);
        }
        else break;
    }
    reverse(ans.begin(), ans.end());
    return ans;
};
int main(){
    string s;
    cin >>s;
    int n;
    cin >>n;
    cout << smallestInt(s, n);
    
}
