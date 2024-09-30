#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    // 1) Question
    string s="helloworld";
    int n=s.size();
    string str="";
    for(int i=0;i<n;i++){
        if(((s[i]-'a')/5)%2==0) str+='0';
        else str+='1';
    }
    cout<<str;

    // 2) Question
    // vector<int> v={3,4,3,4,5,7};
    // int n=v.size();
    // unordered_map<int, int> mp;
    // for(int x: v){
    //     mp[x]++;
    // }
    // int maxi=0;
    // int k=0;
    // for(auto x:mp){
    //     if(x.second>maxi){
    //         maxi=x.second;
    //         k=x.first;
    //     }
    // }
    // int c=0;
    // for(int x:v){
    //     if(x==k) c++;
    // }
    // cout<<n-c;
}