#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void factUpto(int n){
    int f=1;
    for(int i=1;i<=n;i++){
        f *= i;
        cout<<f<<endl;
    }
}
int main()
{
factUpto(6);
return 0;
}