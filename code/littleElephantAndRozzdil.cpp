#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n;
    cin>>n;
    vector<ll> v(n);
    vector<ll> count;
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    ll mini=*min_element(v.begin(),v.end());
    ll idx=0;
    ll c=0;
    for(int i=0;i<n;i++){
        if(v[i]==mini){
            c++;
            idx=i+1;
        }
        count.push_back(c);
    }
    ll c1=0;
    for(int i=0;i<count.size();i++){
        if(count[i]>1) c1++;
    }
    if(c1>0) cout<<"Still Rozdil";
    else cout<<idx;
}