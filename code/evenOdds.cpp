#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n,k;
    cin>>n>>k;
    ll div=0;
    ll ans=0;
    div=(n+1)/2;
    if(k<=div){
        ans=(k*2)-1;
    }
    else{
        ans=(k-div)*2;
    }
    cout<<ans<<endl;
}