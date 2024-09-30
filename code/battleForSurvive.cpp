#include<iostream>
#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int main()
{
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        vector<ll> v(n);
        for(ll i=0;i<n;i++){
            cin>>v[i];
        }
        if(n==2) cout<<v[n-1]-v[n-2]<<endl;
        else{
            ll num=v[n-2];
            for(int i=n-3;i>=0;i--){
                num-=v[i];
            }
            cout<<v[n-1]-num<<endl;
        }
    }
}