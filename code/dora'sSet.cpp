#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    
    
    int a=1,b=2,c=3;
    if(__gcd(a,b)==__gcd(b,c)==__gcd(a,c)) cout<<1;
    else cout<<0;

        
    return 0;
    
}