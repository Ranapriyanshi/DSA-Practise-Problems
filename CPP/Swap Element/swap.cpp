#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
void swap(int arr[],int a1,int a2){
    int temp = arr[a2];
    arr[a2] = arr[a1];
    arr[a1] = temp;
}

int main(){
    int arr[4];
    for(int i=0;i<4;i++){
        cin>>arr[i];
    }
    int i=0;
    while(i<=2){
        swap(arr, i, i+1);
        i+=2;
    }

    for(int i=0;i<4;i++){
        cout << arr[0];
    }
}