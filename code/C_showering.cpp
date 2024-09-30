#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n, s, m;
        cin>>n>>s>>m;
        vector<pair<int, int>> v(n);
        for(int i=0;i<n;i++){
            cin>>v[i].first>>v[i].second;
        }
        bool found=false;
        int previousEnd=0;
        for(auto x:v){
            if(x.first-previousEnd>=s){
                found=true;
                break;
            }
            previousEnd=max(previousEnd, x.second);
        }
        if(!found&& m-previousEnd>=s){
            found=true;
        }
        if(found) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}