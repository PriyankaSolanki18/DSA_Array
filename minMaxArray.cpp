#include<bits/stdc++.h>
using namespace std;

int32_t main(){
    int maxNo=INT_MIN;
    int minNo=INT_MAX;
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        maxNo=max(maxNo,arr[i]);
        minNo=min(minNo,arr[i]);
    }
    cout<<"Max = "<<maxNo<<endl;
    cout<<"Min = "<<minNo<<endl;
    cout<<"Sum = "<<minNo+maxNo;
    return 0;
}