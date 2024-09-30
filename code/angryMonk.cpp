#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int> v(k);
        for(int i=0;i<k;i++){
            cin>>v[i];
        }
        sort(v.begin(), v.end());
        int co=0;
        int c=0;
        int ck=0;
        for(int i=0;i<k;i++){
            if(v[i]==1) co++;
            else if(i!=k-1){
                c+=v[i]-1+v[i];
            }
        }
        int ans=co+c;
        if(co==k) cout<<k-1<<endl;
        else cout<<ans<<endl;
    }
}