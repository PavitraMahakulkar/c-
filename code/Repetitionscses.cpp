#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int ans=0;
    int c=0;
    char l='A';
    for(char d:s){
        if(d==l){
            ++c;
            ans=max(ans,c);
        }
        else{
            c=1;
            l=d;
        }
    }
    cout<<ans;
}