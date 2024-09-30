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
        string s;
        cin>>s;
        if(m>n) cout<<"YES"<<endl;
        else{
            bool flag=true;
            int i=0;
            while(i<n){
                if(s[i+m]=='L') i+=m;
                else if(s[i+m]!='C') i+=m;
                else if(s[i+m]=='W' && k!=0){
                    i+=m;
                    k--;
                }
                else{
                    flag=false;
                    break;
                }
            }
            if(i==n && flag==true) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;

            Not Accepted
        }
    }
}