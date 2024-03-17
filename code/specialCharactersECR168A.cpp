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
        string str="";
        if(n%2!=0){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
            for(int i=0;i<n/3+1;i++){
                str+=76;
                str+=76;
                str+=89;
                str+=89;
            }
            str.erase(str.begin()+n/2+n/2,str.end());
            cout<<str<<endl;
        }
    }
}