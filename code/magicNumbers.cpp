#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    bool flag=false;
    int n=s.size();
    for(int i=0;i<n;){
        if(s[i]=='1' && s[i+1]=='4' && s[i+2]=='4'){
            flag=true;
            i+=3;
        }
        else if(s[i]=='1'&& s[i+1]=='4'){
            flag=true;
            i+=2;
        }
        else if(s[i]=='1'){
            flag=true;
            i++;
        }
        else{
            flag=false;
            break;
        }
    }
    if(flag) cout<<"YES";
    else cout<<"NO";
}
