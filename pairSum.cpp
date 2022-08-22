#include<bits/stdc++.h>
using namespace std;
// bool pairsum(int arr[],int n,int k){
//     for(int i=0;i<n-1;i++){
//         for(int j=i+1;j<n;j++){
//             if(arr[i]+arr[j]==k){
//                 cout<<i<<" "<<j<<endl;
//                 return true;
//             }
//         }
//     }
//       return false;
// }

//---------optimized---------
bool pairsum(int a[],int n,int k){
    int low=0, high=n-1;
    while(low<high){
        if(a[low]+a[high]==k){
            cout<<low<<" "<<high<<endl;
            return true;
        }else if(a[low]+a[high]>k){
            high--;
        }else{
            low++;
        }
    }
    return false;
}
int32_t main(){
    int arr[]={2,4,7,11,14,16,20,21};
    int k=31;
    cout<<pairsum(arr,8,k)<<endl;
    return 0;
}