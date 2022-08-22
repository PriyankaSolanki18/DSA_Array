#include<bits/stdc++.h>
using namespace std;
//wrong check it
int32_t main(){
    int n,m,target;
    cin>>n>>m>>target;
    int mat[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>mat[i][j];
        }
    }
    int r=0, c=m-1;
    bool found=false;
    while(r<n and c>=0){
        if(mat[r][c]==target){
            found=true;
        }
        if(mat[r][c]>target){
            c--;
        }else{
            r++;
        }
        if(found){
        cout<<"found";
        }
        else{
        cout<<"not found";
        }
    }
    return 0;
}