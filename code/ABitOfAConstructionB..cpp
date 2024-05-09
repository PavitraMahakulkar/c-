#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t-->0){
        int n;
        cin>>n;
        int k;
        cin>>k;
        vector<int> v;
        int co=0;
        int c=k;
        for(int i=0;i<n;i++){
            co=(k%4)-1;
            v.push_back(co);
            co=(co/4)+1;
        }
        for(int i=0;i<n;i++){
            cout<<v[i]<<' ';
        }
        cout<<endl;
    }
    return 0;
}