#include<iostream>
using namespace std;
int fact(int n){
    int facto=1;
    for(int i=2;i<=n;i++){
        facto*=i;
    }
    return facto;
}
int main()
{
    int n,r;
    cin>>n>>r;
    int ans=fact(n)/(fact(r)*fact(n-r));
    cout<<ans<<" ";
    return 0;
}