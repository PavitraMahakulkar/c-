#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,str;
    cin>>s>>str;
    reverse(s.begin(), s.end());
    int x=s.compare(str);
    if(x==0) cout<<"YES";
    else cout<<"NO";
}