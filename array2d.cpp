#include<bits/stdc++.h>
using namespace std;
// 3 5
// 5 12 17 9 3
// 13 4 8 14 1
// 9 6 3 7 21
int32_t main(){
    int n,m;
    cin>>n>>m;
    //Input
    int arr[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    //output
     for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    //finding an element
    int x;
    cin>>x;
    bool flag=false;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(arr[i][j]==x){
                cout<<i<<" "<<j<<endl;
                flag=true;
            }
        }
    }
    if(flag)
    cout<<"element found";
    else
    cout<<"element not found";
    return 0;
}