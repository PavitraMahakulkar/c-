#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        vector<int> v(n);
        char s[n];
        int mul=1;
        for(int i=0;i<n;i++){
            cin>>v[i];
            mul*=v[i];
        }
        for(int i=0;i<n;i++){
            cin>>s[i];
        }
        for(int i=0;i<n;++i){
            int res=mul%m;
            cout<<res<<" ";
            if(s[i]=='L'){
                mul=mul/v[i];
            }
            else if(s[i]=='\0') break;
            else{
                int k=n;
                mul=(mul/v[k-1]);
                k=n-1;
            }
        }
        // int i=0,j=n-1;
        // while(i<j){
        //     int res=mul%m;
        //     cout<<res<<" ";
        //     if(s[i]=='L'){
        //         mul=mul/v[i];
        //         i++;
        //     }
        //     else{
        //         mul=mul/v[j];
        //         j--;
        //     }
        //     cout<<endl;
        // }
    }
}