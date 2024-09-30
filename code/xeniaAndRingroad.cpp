#include<iostream>
#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n,m,time=0,a=0,b;
    cin>>n>>m;
    for(int i=0;i<m;i++){
        cin>>b;
        if(a>b){
            time+=(n-a)+b;
        }
        else if(a==b){
            time+=0;
        }
        else{
            time+=(b-a);
        }
        a=b;
    }
    cout<<time-1;
}