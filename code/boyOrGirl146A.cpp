#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    unordered_set<char> str;
    for(int i=0;i<s.size();i++){
        str.insert(s[i]);
    }
    if(str.size()%2==0){
        cout<<"CHAT WITH HER!";
    }
    else{
        cout<<"IGNORE HIM!";
    }
}