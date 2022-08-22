#include<bits/stdc++.h>
using namespace std;
int kadane(int arr[],int n){
    int curSum=0;
    int maxSum=INT_MIN;
    for(int i=0;i<n;i++){
        curSum+=arr[i];
        if(curSum<0){
            curSum=0;
        }
        maxSum=max(maxSum,curSum);
    }
    return maxSum;
}
int32_t main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int wrapsum, nonwrapsum;
    int totalsum=0;
    nonwrapsum=kadane(arr,n);
    for(int i=0;i<n;i++){
        arr[i]=-arr[i];
    }
    wrapsum=totalsum+kadane(arr,n);
    cout<<max(wrapsum,nonwrapsum);
    return 0;
}