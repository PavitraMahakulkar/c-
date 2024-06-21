#include<iostream>
#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll t;
    cin>>t;
    while(t--){
        ll h,n;
        cin>>h>>n;
        vector<ll> damage(n);
        vector<ll> cooldown(n);
        for(ll i=0;i<n;i++){
            cin>>damage[i];
        }
        for(ll i=0;i<n;i++){
            cin>>cooldown[i];
        }
        ll turn=0;
        while(h!=0){
            for(ll i=0;i<n;i++){
                if(cooldown[i]%turn==0){
                    h-=damage[i];
                }
            }
            turn++;
        }
        cout<<turn<<endl;
    }
}