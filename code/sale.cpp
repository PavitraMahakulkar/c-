#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,m;
    cin>>n>>m;
    vector<long long> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    sort(v.begin(), v.end());
    long long sum=0;
    for(int i=0;i<m;i++){
        if(v[i]>=0) break;
        sum+=v[i];
    }
    cout<<(-1)*sum<<endl;
}