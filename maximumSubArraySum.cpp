#include<bits/stdc++.h>
using namespace std;

int32_t main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    // int maxSum=INT_MIN;
    // for(int i=0;i<n;i++){
    //     for(int j=i;j<n;j++){
    //         int sum=0;
    //         for(int k=i;k<=j;k++){
    //             sum+=a[k];
    //         }
    //         maxSum=max(maxSum,sum);
    //     }
    // }
    //     cout<<maxSum;

    //----------cummulative approach-------------
    int curSum[n+1];
    curSum[0]=0;
    for(int i=1;i<=n;i++){
        curSum[i]=curSum[i-1]+a[i-1];
    }
    int maxSum=INT_MIN;
    for(int i=1;i<=n;i++){
        int sum=0;
        for(int j=0;j<i;j++){
            sum=curSum[i]-curSum[j];
            maxSum=max(sum,maxSum);
        }
    }
    cout<<maxSum;
    return 0;
}