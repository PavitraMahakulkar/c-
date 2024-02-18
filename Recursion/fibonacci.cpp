#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int fibo(int n){
    if(n==1 || n==0) return 1;
    int leftans=fibo(n-1);
    int rightans=fibo(n-2);
    return leftans+rightans;
}
int main()
{
cout<<fibo(6);
return 0;
}