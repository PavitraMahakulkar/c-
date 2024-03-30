#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        if(s.size()>10){
            int n=s.size()-2;
            int k=s.size();;
            cout<<s[0]<<n<<s[k-1]<<endl;
        }
        else{
            cout<<s<<endl;
        }
    }
}