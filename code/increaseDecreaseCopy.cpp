#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        vector<ll> v1(n);
        vector<ll> v2(n+1);
        for(int i=0;i<n;i++){
            cin>>v1[i];
        }
        for(int i=0;i<n+1;i++){
            cin>>v2[i];
        }
        ll diff=INT_MAX;
        ll c=1;
        bool k=false;
        for(int i=0;i<n;i++){
            c+=abs(v1[i]-v2[i]);
        }
        for(int i=0;i<n;i++){
            if((v1[i]>v2[n] && v2[i]<v2[n]) || (v1[i]<v2[n] && v2[i]>v2[n])){
                k=true;
            }
            diff=min({abs(v2[n]-v2[i]),diff,abs(v1[i]-v2[n])});
        }
        if(k==false){
            c+=diff;
        }
        cout<<c<<endl;

    }
}