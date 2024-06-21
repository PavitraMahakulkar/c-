#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,y,z;
    cin>>x>>y>>z;
    int len=sqrt((x*y)/z);
    int bre=sqrt((x*z)/y);
    int hei=sqrt((y*z)/x);
    cout<<4*(len+bre+hei);
}