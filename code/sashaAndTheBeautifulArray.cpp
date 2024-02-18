#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--){
    int x;
    cin>>x;
    vector<int> v;
    for(int i=0;i<x;i++){
        int k;
        cin>>k;
        v.push_back(k);
    }
    sort(v.begin(),v.end());
    int sum=0;
    for(int i=0;i<x-1;i++){
        sum=sum+ v[i+1]-v[i];
    }

    cout<<sum<<endl;
}

}