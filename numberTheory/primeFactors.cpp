#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int> pf;
    for(int i=2;i*i<=n;i++){
        while(n%i==0){
            pf.push_back(i);
            n/=i;
        }
    }
    if(n>1){
        pf.push_back(n);
    }
    for(auto x:pf){
        cout<<x<<" ";
    }
}