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
    int diff=abs(v[0]-v[n-1]);
    int idx1=0;
    int idx2=n-1;
    for(int i=0;i<n-1;i++){
        int absalute=abs(v[i]-v[i+1]);
        if(diff>absalute){
            idx1=i;
            idx2=i+1;
            diff=absalute;
        }
    }
    cout<<idx1+1<<" "<<idx2+1;
}