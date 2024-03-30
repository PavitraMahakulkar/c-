#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    unordered_set<char> s;
    int t=4;
    while(t--){
        int k;
        cin>>k;
        s.insert(k);
    }
    cout<<4-s.size();
}