#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        string s;
        cin>>n;
        cin>>s;
        int sum=0;
        sort(s.begin(), s.end());
        int siz=s.size();
        int ca=0,cb=0, cc=0,cd=0;
        for(int i=0;i<siz;i++){
            if(s[i]=='A') ca++;
            if(s[i]=='B') cb++;
            if(s[i]=='C') cc++;
            if(s[i]=='D') cd++;
        }
        if(ca>=n) sum+=n;
        else sum+=ca;
        if(cb>=n) sum+=n;
        else sum+=cb;
        if(cc>=n) sum+=n;
        else sum+=cc;
        if(cd>=n) sum+=n;
        else sum+=cd;
        cout<<sum<<endl;

    }
}