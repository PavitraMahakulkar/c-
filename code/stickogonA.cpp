#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
    cin>>n;
    vector<int> v(n);
    map<int,int> m;

    for(int i=0;i<n;i++){
        cin>>v[i];
    }
     for(int i=0;i<n;i++){
        m[v[i]]++;
    }
    int ans=0;
    for(auto x:m){
        if(x.second>=3) ans+=(x.second/3);
    }
    cout<<ans<<endl;
    }
}