#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int c=0;
    int max=0;
    while(t--){
        int a,b;
        cin>>a>>b;
        c=c+b-a;
        if(c>max) max=c;
    }
    cout<<max<<endl;
}