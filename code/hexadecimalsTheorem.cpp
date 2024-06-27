#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int fibo(int n,vector<int>& v){
    if(n==1 || n==0) return n;
    v.push_back(fibo(n-1,v)+fibo(n-2,v));
}
int main()
{
    int n;
    cin>>n;
    cout<<0<<" "<<0<<" "<<n;
}