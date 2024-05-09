#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int factorial(int n){
    if(n==0 || n==1) return 1;
    return n*factorial(n-1);
}
int main()
{
    int n;
    cin>>n;
    cout<<factorial(n);
    // int n;
    // cin>>n;
    // int fac=1;
    // for(int i=n;i>1;i--){
    //     fac*=i;
    // }
    // cout<<fac<<endl;
}
