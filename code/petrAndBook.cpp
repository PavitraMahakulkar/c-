#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num;
    cin>>num;
    vector<int> v(7);
    for(int i=0;i<7;i++){
        cin>>v[i];
    }
    int t=v[0];
    int i=0;
    while(t<num)
    {
        i++;
        i%=7;
        t+=v[i];
    }
    cout<<i+1;
}