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
        int eve=0;
        int oddi=0;
        for(int i=0;i<n;i++){
            cin>>v[i];
            if(v[i]%2==1) oddi+=v[i];
            else eve+=v[i];
        }
        if(eve>oddi) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;

    }
}