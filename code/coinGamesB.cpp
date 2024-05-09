#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        string s;
        cin>>s;
        long long c=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='U') c++;
        }
        if(c%2==0) cout<<"NO"<<endl;
        else cout<<"Yes"<<endl;
    }
}