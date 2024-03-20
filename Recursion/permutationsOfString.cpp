#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void permutations(string ans,string org){
    if(org==""){
        cout<<ans<<endl;
        return;
    }
    for(int i=0;i<org.length();i++){
        char ch=org[i];
        string left=org.substr(0,i);
        string right=org.substr(i+1);
        permutations(ans+ch, left+right);
    }
}
int main()  
{
    string s="abc";
    permutations("",s);
}