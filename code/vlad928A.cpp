#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    
    while(t--){
        char s[5];
        int c1=0;
        int c2=0;
        for(int i=0;i<5;i++){
            cin>>s[i];
            if(s[i]=='A') c1++;
            else c2++;
        }
        if(c1>c2) cout<<'A'<<endl;
        else cout<<'B'<<endl;
    }
    
}