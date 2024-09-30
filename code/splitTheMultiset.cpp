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
        int ans=0;
        if(n==1) ans=0;
        // else if(n<=k) ans=1;
        // else{
        //     int num=n;
        //     int c=0;
        //     while(num>0){
        //         num=num-k-1;
        //         c++;
        //     }
        //     ans=c+1;
        // }
        else if(n%k==0) ans=n/k+1;
        else if(n%k!=0) ans=n/k+2;
        cout<<ans<<endl;
    }
    // NOT DONE YET
}