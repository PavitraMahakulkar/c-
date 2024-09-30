#include<iostream>
#include<bits/stdc++.h>
#define ll long long
using namespace std;
int const N=1e4+10;
int main()
{
    ll n,a[N], m;
    vector<ll> b;
    cin>>n;
    for(ll i=0;i<n;i++){
        cin>>a[i];
    }
    ll k;
    cin>>m;
    for(ll i=0;i<m;i++){
        cin>>k;
        for(ll j=0;j<n;j++){
            if(k%a[j]==0) b.push_back(k/a[j]);
        }
    }
    ll maxi=*max_element(b.begin(),b.end());
    ll c=count(b.begin(),b.end(),maxi);
    cout<<c<<endl;
}