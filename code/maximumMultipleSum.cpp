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
        vector<int> v;
        for(int i=2;i<=n;i++){
            int ele=0;
            for(int j=i;j<=n;j+=i){
                ele+=j;
            }
            v.push_back(ele);
        }
        int idx=0;
        int maxi=*max_element(v.begin(),v.end());
        for(int i=0;i<v.size();i++){
            if(v[i]==maxi) idx=i;
        }
        cout<<idx+2<<endl;
    }
}