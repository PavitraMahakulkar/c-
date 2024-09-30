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
        vector<ll> odd;
        vector<ll> even;

        for(ll i=0;i<n;i++){
            ll a;
            cin>>a;
            if(a%2==1) odd.push_back(a);
            else even.push_back(a);
        }
        if(odd.empty()){
            cout<<0<<endl;
            continue;
        }
        sort(odd.begin(), odd.end());
        sort(even.begin(), even.end());
        ll ans=even.size();
        ll curr=odd.back();
        for(auto x:even){
            if(curr<x){
                ans++;
                break;
            }
            curr+=x;
        }
        cout<<ans<<endl;
    }
}