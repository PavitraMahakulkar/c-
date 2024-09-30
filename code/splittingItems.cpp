#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int> v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        sort(v.begin(),v.end());
        int num=0;
        for(int i=n-2;i>=0;i--){
            if(k==0) break;
            int l=v[i+1]-v[i];
            if(l<=k){
                v[i]+=l;
                k-=l;
            }
            else{
                v[i]+=k;
                k=0;
            }
        }
        for(int i=n-2;i>=0;i--){
            if(i==0 && n%2==1) num+=v[i];
            else if(v[i]<v[i+1]) num+=(v[i+1]-v[i]);
        }
        cout<<num<<endl;
    }
}