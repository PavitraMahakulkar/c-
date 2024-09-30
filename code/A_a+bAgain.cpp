#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int f(int sum, int n){
    while(n>0){
        sum+=(n%10);
        n/=10;
    }
    return sum;
}
int main()
{
    int t;
    cin>>t;
    while(t--){
        int sum=0;
        int n;
        cin>>n;
        cout<<f(sum, n)<<endl;
    }
}