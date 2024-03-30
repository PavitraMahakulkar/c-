#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    vector<char> v;
    for(int i=0;i<s.size();i++){
        if(s[i]!='+'){
            v.push_back(s[i]);
        }
    }
    sort(v.begin(),v.end());
    int n=v.size();
    for(int i=0;i<v.size();i++){
        cout<<v[i];
        if(i!=n-1){
            cout<<'+';
        }
    }
    
}