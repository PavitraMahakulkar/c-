#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a,b,c,str;
    cin>>a>>b>>c;
    str=a+b;
    sort(str.begin(),str.end());
    sort(c.begin(),c.end());
    if(str==c){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
}