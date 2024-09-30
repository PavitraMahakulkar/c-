#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        vector<int> v(3);
        for(int i=0;i<3;i++){
            cin>>v[i];
        }
        int k=5;
        while(k--){
            int mini=*min_element(v.begin(),v.end());
            for(int i=0;i<3;i++){
                if(v[i]==mini){
                    v[i]++;
                    break;
                }
            }
        }
        int ans=1;
        for(int n:v) ans*=n;
        cout<<ans<<endl;
    }
}