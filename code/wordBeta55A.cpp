#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int c=0;
    for(int i=0;i<s.size();i++){
        if(isupper(s[i])){
            c++;
        }
    }
    if(c>(s.size()/2)){
        for(int i=0;i<s.size();i++){
            char c;
            c=toupper(s[i]);
            s[i]=c;
        }
    }
    else{
        for(int i=0;i<s.size();i++){
            char c;
            c=tolower(s[i]);
            s[i]=c;
        }
    }
    cout<<s;
}