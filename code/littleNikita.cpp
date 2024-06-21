#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int help(int n, int m){
    if(n==m) return true;;
    help(n-1,m);
    help(n+1,m);
}
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        // if(n<m) cout<<"No"<<endl;
        // else if(n==m) cout<<"Yes"<<endl;
        // else{
        //     if((n%m)%2==0){
        //         cout<<"Yes"<<endl;
        //     }
        //     else cout<<"No"<<endl;
        // }
        bool k=help(n,m);
        if(k==true) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
}