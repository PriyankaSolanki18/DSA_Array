#include<iostream>
using namespace std;
int sum(int n1,int n2){
    int s=n1+n2;
    return s;
}
int main(){
    int a,b;
    cin>>a>>b;
    cout<<"Sum = "<<sum(a,b);
    return 0;
}