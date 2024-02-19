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
        char s[n];
        for(int i=0;i<n;i++){
            cin>>s[i];
        }
        int c=0;
        for(int i=1;i<n;i++){
            if(s[i]=='@') c++;
            else if(s[i]=='*' && s[i-1]=='*') break;
            else continue;
        }
        cout<<c<<endl;
    }
}