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
        int c=0;
        for(int i=0;i<n-1;i++){
            if(v[i]<=v[i+1]){
                c++;
            }
        }
        if(c==n-1){
            cout<<"YES";
        }
        else{
            string s="";
            for(int j=0;j<n;j++){
                s[j]=v[j];
            }
            // for(int i=0;i<n-1;i++){
            //     s[i]+=s[i+1];
            // }
            int c1=0;
            for(int i=0;i<n;i++){
                v[i]=stoi(s);
            }
            for(int i=0;i<n-1;i++){
                if(v[i]<v[i+1]){
                    c1++;
                }
            }
            if(c1>0){
                cout<<"NO";
            }
        }


    }
}