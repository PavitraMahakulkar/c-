#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void sum1(int sum,int n){
    if(n==0){
        cout<<sum<<endl;
    }
    sum1(sum+n,n-1);
}

int main()
{
sum1(0,6);
}