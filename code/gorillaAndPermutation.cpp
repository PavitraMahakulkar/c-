#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,m,k;
        cin>>n>>m>>k;
        vector<int> v(n);
        for(int i=0;i<n;i++){
            v[i]=i+1;
        }
        rotate(v.begin(),v.begin()+m,v.end());
        reverse(v.begin(),v.end()-m);
        for(int l:v) cout<<l<<" ";
        cout<<endl;
    }
}