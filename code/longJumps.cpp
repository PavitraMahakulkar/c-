#include<iostream>
#include<bits/stdc++.h>
#define ll long long
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
        ll maxi=INT_MIN;
        // for(ll i=n-1;i>=0;i--){
        //     ll total=0;
        //     total+=v[i];
        //     if(i+v[i]<n){
        //         total+=v[i+v[i]];
        //     }
        //     v[i]=total;
        //     maxi=max(maxi,v[i]);
        // }
        // cout<<maxi<<endl;
        vector<ll> dp(n,0);
        for(int i=n-1;i>=0;i--){
            dp[i]=v[i];
            if(i+v[i]<n){
                dp[i]+=dp[i+v[i]];
            }
            maxi=max(maxi, dp[i]);
        }
        cout<<maxi<<endl;
    }
}