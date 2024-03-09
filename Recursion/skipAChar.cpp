#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// void removeChar(string ans, string original){
//     if(original.size()==0){
//         cout<<ans;
//         return;
//     }
//     char ch=original[0];
//     if(ch=='a') removeChar(ans,original.substr(1));
//     else removeChar(ans+ch,original.substr(1));
// }
void removeChar(string ans, string original,int idx){
    if(idx==original.size()){
        cout<<ans;
        return;
    }
    char ch=original[idx];
    if(ch=='a') removeChar(ans,original,idx+1);
    else removeChar(ans+ch,original,idx+1);
}
int main()
{
    string s="pavitra";
    // string str="";
    // for(int i=0;i<s.size();i++){
    //     if(s[i]!='a') str.push_back(s[i]);
    // }
    // cout<<str;
    // removeChar("",s);
    removeChar("",s,0);
}