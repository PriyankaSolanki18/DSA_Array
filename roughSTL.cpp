#include<bits/stdc++.h>
#include<iostream>
#include<array>
#include<vector>
#include<deque>
#include<list>
#include<stack>
#include<queue>
#include<set>
#include<map>
#include<algorithm>
using namespace std;
int main(){
    //1. arrray
    // array<int,4> a={1,2,3,4};
    // int size=a.size();
    // for(int i=0;i<size;i++){
    //     cout<<a[i]<<" ";
    // }
    // cout<<endl;
    // cout<<"Element at index 2 = "<<a.at(2)<<endl;
    // cout<<"Empty or not = "<<a.empty()<<endl;
    // cout<<"First element = "<<a.front()<<endl;
    // cout<<"Back element = "<<a.back()<<endl;

     
    //2. vector
    // vector<int> v;
    // cout<<"Capacity = "<<v.capacity()<<endl;
    // v.push_back(1);
    // cout<<"Capacity = "<<v.capacity()<<endl;
    // v.push_back(2);
    // cout<<"Capacity = "<<v.capacity()<<endl;
    // v.push_back(3);
    // cout<<"Capacity = "<<v.capacity()<<endl;
    // cout<<"Size = "<<v.size()<<endl;
    // cout<<"Element at index 2 = "<<v.at(2)<<endl;
    // cout<<"Front = "<<v.front()<<endl;
    // cout<<"End = "<<v.back()<<endl;
    // cout<<"Before pop:"<<endl;
    // for(int i:v){
    //     cout<<i<<" ";
    // }cout<<endl;
    // v.pop_back();
    // cout<<"After pop:"<<endl;
    // for(int i:v){
    //     cout<<i<<" ";
    // }cout<<endl;
    // cout<<"Before clear size = "<<v.size()<<endl;
    // v.clear();
    // cout<<"After clear size = "<<v.size()<<endl;

    // vector<int> a(5,1);
    // cout<<"Print a = ";
    // for(int i:a){
    //     cout<<i<<" ";
    // } cout<<endl;
    // vector<int> last(a);
    // cout<<"Print last = "<<" ";
    // for(int i:last){
    //     cout<<i<<" ";
    // } cout<<endl;


    //3. deque
    // deque<int> d;
    // d.push_back(1);
    // d.push_back(2);
    // for(int i:d){
    //     cout<<i<<" ";
    // }cout<<endl;
    // d.pop_back();
    // d.pop_front();
    // cout<<endl;
    // for(int i:d){
    //     cout<<i<<" ";
    // }
    // cout<<"Print element at index 1 = "<<d.at(1)<<endl;
    // cout<<"Front = "<<d.front()<<endl;
    // cout<<"Back = "<<d.back()<<endl;
    // cout<<"Empty or not = "<<d.empty()<<endl;
    // cout<<"Before erase = "<<d.size()<<endl;
    // d.erase(d.begin(),d.begin()+1);
    // cout<<"After erase = "<<d.size()<<endl;
    // cout<<"Print = ";
    // for(int i:d){
    //     cout<<i<<" ";
    // }


    //4. list
    // list<int> l;
    // l.push_back(1);
    // l.push_back(2);
    // for(int i:l){
    //     cout<<i<<" ";
    // }    cout<<endl;
    // l.erase(l.begin());
    // cout<<"After erase from begning = ";
    // for(int i:l){
    //     cout<<i<<" ";
    // }cout<<endl;
    // cout<<"Size = "<<l.size()<<endl;
    // list<int> n(l);
    // cout<<"Print list n = ";
    // for(int i:n){
    //     cout<<i<<" ";
    // }cout<<endl;
    // list<int> m(5,100);
    // cout<<"Print list m = ";
    // for(int i:m){
    //     cout<<i<<" ";
    // }cout<<endl;


    //5. stack
    // stack<string> s;
    // s.push("Priyanka");
    // s.push("solanki");
    // s.push("Prateek");
    // cout<<"Top element = "<<s.top()<<endl;
    // s.pop();
    // cout<<"Top element = "<<s.top()<<endl;
    // cout<<"Size of stack = "<<s.size()<<endl;
    // cout<<"Empty or not = "<<s.empty()<<endl;


    //6. queue
    // queue<string> q;
    // q.push("priyanka");
    // q.push("solanki");
    // q.push("googler");
    // cout<<"First element = "<<q.front()<<endl;
    // cout<<"size before pop = "<<q.size()<<endl;
    // q.pop();
    // cout<<"First element = "<<q.front()<<endl;
    // cout<<"size after pop = "<<q.size()<<endl;


    //7. priority queue
    // priority_queue<int> maxi;
    // priority_queue<int,vector<int>,greater<int>> mini;
    // maxi.push(1);
    // maxi.push(3);
    // maxi.push(2);
    // maxi.push(0);
    // cout<<"Size = "<<maxi.size()<<endl;
    // int n=maxi.size();
    // for(int i=0;i<n;i++){
    //     cout<<maxi.top()<<" ";
    //     maxi.pop();
    // }cout<<endl;
    // mini.push(5);
    // mini.push(1);
    // mini.push(0);
    // mini.push(4);
    // mini.push(3);
    // int m=mini.size();
    // for(int i=0;i<m;i++){
    //     cout<<mini.top()<<" ";
    //     mini.pop();
    // }cout<<endl;
    // cout<<"Empty or not = "<<mini.empty()<<endl;


    //8. set
    // set<int> s;
    // s.insert(5);
    // s.insert(5);
    // s.insert(5);
    // s.insert(1);
    // s.insert(6);
    // s.insert(6);
    // s.insert(0);
    // for(auto i:s){
    //     cout<<i<<" ";
    // }cout<<endl;
    // s.erase(s.begin());
    // for(auto i:s){
    //     cout<<i<<" ";
    // }cout<<endl;
    // set<int>::iterator it=s.begin();
    // it++;
    // s.erase(it);
    // for(auto i:s){
    //     cout<<i<<" ";
    // }cout<<endl;
    // cout<<"5 is present or not = ";
    // cout<<s.count(5)<<endl;
    // set<int>::iterator itr=s.find(5);
    // for(auto it=itr;it!=s.end();it++)
    // {
    //    cout<<it<<" ";          error
    // }cout<<endl;


    //9. map
    // map<int,string> m;
    // m[1]="priyanka";
    // m[13]="love";
    // m[2]="solanki";
    // for(auto i:m){
    //     cout<<i.first<<endl;
    // }cout<<endl;
    // // m.insert{5,"bheem"};
    // cout<<"Before erase = "<<endl;
    // for(auto i:m){
    //     cout<<i.first<<" "<<i.second<<endl;
    // }cout<<endl;
    // cout<<"Finding 13 = "<<m.count(13)<<endl;
    // m.erase(13);
    // cout<<"After erase = "<<endl;
    // for(auto i:m){
    //     cout<<i.first<<" "<<i.second<<endl;
    // }cout<<endl;
    // auto it=m.find(5);
    // for(auto i=it;i!=m.end();i++){
    //     cout<<(*i).first<<endl;
    // }


    //10. Algorithm
    vector<int> v;
    v.push_back(1);
    v.push_back(3);
    v.push_back(6);
    v.push_back(7);
    cout<<"finding 6 = ";
    cout<<binary_search(v.begin(),v.end(),6)<<endl;
    cout<<"lower bound = "<<lower_bound(v.begin(),v.end(),6)-v.begin()<<endl;
    cout<<"upper bound = "<<upper_bound(v.begin(),v.end(),4)-v.begin()<<endl;
    int a=3;
    int b=5;
    cout<<"Max = "<<max(a,b)<<endl;
    cout<<"Min = "<<min(a,b)<<endl;
    swap(a,b);
    cout<<"a = "<<a<<" b = "<<b<<endl;
    string abcd="abcd";
    reverse(abcd.begin(),abcd.end());
    cout<<"reversed string = "<<abcd<<endl;
    rotate(v.begin(),v.begin()+1,v.end());
    cout<<"after rotate = ";
    for(int i:v){
        cout<<i<<" ";
    }cout<<endl;
    sort(v.begin(),v.end());
    cout<<"after sorting = ";
    for(int i:v){
        cout<<i<<" ";
    }cout<<endl;
}