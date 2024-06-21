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
        if(n%10==9) cout<<(n/10)+1<<endl;
        else{
            cout<<n/10<<endl;
        }
        
        
    }
}