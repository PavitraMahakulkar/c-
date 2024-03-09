#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void printBinary(int num){
    for(int i=10;i>=0;--i){
        cout<<((num>>i)&1);
    }
    cout<<endl;
}
int main()
{
    int a=13;
    printBinary(a);
    int i=3;
    if((a & (1<<i)) !=0){
        cout<<"Set bit\n";
    }
    else{
        cout<<"Not set bit\n";
    }
    printBinary(a | (1<<i));
    printBinary(a&(~(1<<i)));
    printBinary(a^(1<<2));
    printBinary(a^(1<<3));

    int ct=0;
    for(int i=31;i>=0;--i){
        if((a&(1<<i)) != 0){
            ct++;
        }
    }
    cout<<ct<<endl;
    cout<<__builtin_popcount(a)<<endl;
    cout<<__builtin_popcountll((1LL<<35)-1)<<endl;

}