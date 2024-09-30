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
    int c=0;
    bool f=false;
    sort(v.begin(),v.end());
    for(int i=n-1;i>=1;i--){
        if(v[i]!=v[i-1]){
            f=!f;
        }
        if(f==true){
            c++;
        }
        if(f==false && c>0) break;
    }
    cout<<c<<endl;
}