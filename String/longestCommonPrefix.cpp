#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
vector<string> v;
v.push_back("flower");
v.push_back("flow");
v.push_back("flight");
int n=v.size();
if(n==1) cout<<v[0];
sort(v.begin(),v.end());
string first=v[0];
string last=v[n-1];
string s="";
for(int i=0;i<(min(first.size(),last.size()));i++){
    if(first[i]==last[i]){
        s+=first[i];
    }
    else break;
}
cout<<s<<endl;
return 0;
}