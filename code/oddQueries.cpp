#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t;
    cin>>t;
    while(t--){
        long long n,q;
        cin>>n>>q;
        vector<long long> v(n);
        vector<long long> pre(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        pre[0]=v[0];
        for(int i=1;i<n;i++){
            pre[i]=pre[i-1]+v[i];
        }
        while(q--){
            long long l,r,k;
            cin>>l>>r>>k;
            long long sum=(r-l+1)*k;
            long long sum1=pre[r-1]-pre[l-1]+v[l-1];
            long long ans=pre[n-1]-sum1+sum;
            if(ans%2==1) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
    }
}