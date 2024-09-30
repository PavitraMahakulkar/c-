#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    unordered_map<string, int> mp;
    while(n--){
        string x;
        cin>>x;
        mp[x]++;
    }
    string ans;
    int c=0;
    for(auto& k:mp){
        if(k.second>c){
            ans=k.first;
            c=k.second;
        }
    }
    cout<<ans;
}