#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<vector<int>> v(5,vector<int> (5,0));
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            cin>>v[i][j];
        }
    }
    int a,b;
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            if(v[i][j]==1){
                a=i+1;
                b=j+1;
            }
        }
    }
    int k=abs(3-a)+abs(3-b);
    cout<<k;
}