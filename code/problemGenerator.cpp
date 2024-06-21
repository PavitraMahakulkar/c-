#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin>>t;
    while(t--){
        ll n,m;
        cin>>n>>m;
        string s;
        cin>>s;
        // vector<ll> freq(7,0);
        // for(int i=0;i<7;i++){
        //     freq[s[i]-'A']++;
        // }
        // ll c=0;
        // for(int i=0;i<7;i++){
        //     if(freq[i]<m){
        //         c+=(m-freq[i]);
        //     }
        // }
        // cout<<c<<endl;
        unordered_map<char,ll> mp;
        for(char x:s){
            mp[x]++;
        }
        int c=0;
        if(mp.size()<7){
            c+=((7-mp.size())*m);
        }
        for(auto x:mp){
            if(x.second<m){
                c+=(m-x.second);
            }
        }
        cout<<c<<endl;
    }
}