#include<iostream>
#include<bits/stdc++.h>
using namespace std;
# define ll long long
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int maxi=0;
        int res=0;
        int ans=0;
        for(int i=1;i<n;i++){
            if((__gcd(n,i)+i)>ans){
            ans=__gcd(n,i)+i;
            res = i;
            }
        }
        cout<<res<<endl;
    }
}