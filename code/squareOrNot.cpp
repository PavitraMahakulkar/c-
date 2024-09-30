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
        string s;
        cin>>s;
        int num=sqrt(n);
        // string str=to_string(num);
        // bool f=true;
        // int c=0;
        // int l=num;
        // for(int i=1;i<=n;i++){
        //     num--;
        //     if(num==0){
        //         num=l;
        //         c++;
        //     }
        // }
        // if(num==c) cout<<"YES"<<endl;
        // else cout<<"NO"<<endl;
        int o=0;
        int z=0;
        for(int i=0;i<n;i++){
            if(s[i]=='1') o++;
            else z++;
        }
        if(z==0 &&  n==4){
            cout<<"YES"<<endl;
            continue;
        }
        else if(z==0){
            cout<<"NO"<<endl;
            continue;
        }
        else{
            int c=0;
            
        }
    }
}