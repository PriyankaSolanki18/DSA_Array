#include<bits/stdc++.h>
using namespace std;

int32_t main(){
    int n;
    cin>>n;
    cin.ignore();
    char arr[n+1];
    cin.getline(arr,n);
    cin.ignore();
    int i=0;
    int curlength=0, maxlength=0, st=0, maxst=0;
    while(1){
        if(arr[i]==' '||arr[i]=='\0'){
            if(curlength>maxlength){
                maxlength=curlength;
                maxst=st;
            }
            curlength=0;
            st=i+1;
        }
        curlength++;
        if(arr[i]=='\0')
        break;
        i++;
    }
    cout<<maxlength<<endl;
    for(int i=0;i<maxlength;i++)
    cout<<arr[i+maxst];
    return 0;
}