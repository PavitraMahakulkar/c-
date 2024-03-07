#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    if(isupper(s[0])){
        cout<<s;
    }
    else{
        char c=toupper(s[0]);
        s[0]=c;
        cout<<s;
    }
}