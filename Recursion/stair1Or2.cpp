#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int stair(int n){
    if(n==2) return 2;
    if(n==1) return 1;
    return stair(n-1)+stair(n-2);
}
// this code is for number of possible wayss to climb a stair with only 1 or 2 steps at a time
int main()
{
cout<<stair(4);
}