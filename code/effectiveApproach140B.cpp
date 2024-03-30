#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int m;
    cin>>m;
    vector<int> v1(m);
    for(int i=0;i<m;i++){
        cin>>v1[i];
    }
    int mini=min(n,m);
    // vector<int> v2=v1;
    int c1=0,c2=0;
    while(m--){
        for(int i=0;i<mini;i++){
            c1++;
            if(v[i]==v1[i]){
                
                m--;
                break;
            }
        }
    }
    while(m--){
        for(int i=0;i>mini;i++){
            c2++;
            if(v[n-i]==v1[m-i]){
                
                m--;
                break;
            }
        }
    }
    cout<<c1<<c2<<endl;
}