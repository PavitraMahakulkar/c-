#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    vector<string> v(n);
    bool flag=1;
    for(int i=0;i<n;i++){
        cin>>v[i];
        if(m%2==0) flag=0;
        for(int j=0;j<m;j++){
            if(v[i][j]=='.'){
                if((j+i)%2==0) v[i][j]='B';
                else v[i][j]='W';
            }
        }
    }
    for(int i=0;i<n;i++){
        cout<<v[i]<<endl;
    }
}