#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        long long a,b;
        cin>>a>>b;
        long long maxi=max(a,b);
        long long ans;
        long long margin=(maxi-1)*(maxi-1);
        if(maxi%2){
            if(maxi==a){
                ans=margin+b;
            }
            else{
                ans=margin+2*maxi-a;
            }
        }
        else{
             if(maxi==b){
                ans=margin+a;
            }
            else{
                ans=margin+2*maxi-b;
            }
        }
        cout<<ans<<"\n";
    }
}