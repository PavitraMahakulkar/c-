#include<iostream>
#include<bits/stdc++.h>
using namespace std;
const int N=1e5+10;

int main()
{
    cout<<INT_MAX<<endl;
    int a=(1LL<<31)-1; // signed takes space for +ve or -ve and can store values from -n/2 upto n/2.
    cout<<a<<endl;
    unsigned int b=(1LL<<32)-1; // unsigned doesn't take space for -ve or +ve and store value from 0 t0 n;
    cout<<b<<endl;
}