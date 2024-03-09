#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// void printSubSet(string ans, string original,int idx){
//     if(idx==original.size()){
//         cout<<ans<<endl; 
//         return;
//     }
//     char ch=original[idx];
//     printSubSet(ans+ch,original,idx+1);
//     printSubSet(ans,original,idx+1);
// }
void printSubSet(string ans, string original){
    if(original==""){
        cout<<ans<<endl; 
        return;
    }
    char ch=original[0];
    printSubSet(ans+ch,original.substr(1));
    printSubSet(ans,original.substr(1));
}
int main()
{
    string str="abc";
    // printSubSet("",str,0); efficient for space as doesn't create extra subset.
    printSubSet("",str);
}