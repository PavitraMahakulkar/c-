#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v(4);
    vector<int> v1;
    for(int i=0;i<4;i++){
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    for(int i=0;i<3;i++){
        v1.push_back(v[3]-v[i]);
    }
    for(int x:v1){
        cout<<x<<" ";
    }


}