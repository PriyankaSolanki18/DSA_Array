#include<bits/stdc++.h>
using namespace std;
void reverseArray(int A[],int n){
    int s=0, e=n-1,i;
    
    for(i=0;i<n;i++){
        int temp=A[i];
        A[i]=A[n-1];
        A[n-1]=temp;
        s++;
        e--;
    }
    for(i=0;i<n;i++){
        cout<<A[i]<<" ";
    }
}


int32_t main(){
    int n=5;
    int A[5]={5,8,6,4,3};
    reverseArray(A,5);
    return 0;
}