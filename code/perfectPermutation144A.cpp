#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    // if(n==1){
    //     cout<<-1;
    //     return 0;
    // }
    vector<char> v(n);
    for(int i=0;i<n;i++){
        v[i]=i+1;
    }
    for(int i=1;i<n;i+2){
        char temp=v[i];
        v[i]=v[i-1];
        v[i-1]=temp;
    }
    for(auto ele: v){
        cout<<ele<<" ";
    }
}  