#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int last=0;
    double num;
    // double max=0;
    double max(0);
    for(int i=1;i<=n;i++){
        cin>>num;
        if(ceil(num/m)>=max){
            max=ceil(num/m);
            last=i;
        }
    }
    cout<<last;


}