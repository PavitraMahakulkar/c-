#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    bool color=false;
    while(a--){
        vector<char> v1(b);
        for(int i=0;i<b;i++){
            cin>>v1[i];
            if(v1[i]=='C' || v1[i]=='M' || v1[i]=='Y'){
                color=true;
            }
        }
    }
    // if(color==true) cout<<"#Color";
    // else cout<<"#Black&White";
    (color==true)? cout<<"#Color"<<endl:cout<<"#Black&White"<<endl;
}