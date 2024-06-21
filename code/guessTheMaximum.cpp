#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        int maxi=INT_MIN;
        int mini=INT_MAX;
        for(int i=1;i<n;i++){
            maxi=max(v[i],v[i-1]);
            mini=min(maxi,mini);
        }
        cout<<mini-1<<endl;
    }
}