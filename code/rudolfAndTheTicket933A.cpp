#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        int m;
        int k;
        cin>>n>>m>>k;
        vector<int> v1(n);
        vector<int> v2(m);
        for(int i=0;i<n;i++){
            cin>>v1[i];
        }
        for(int i=0;i<m;i++){
            cin>>v2[i];
        }
        int c=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(v1[i]+v2[j]<=k) c++;
            }
        }
        cout<<c<<endl;
    }
}