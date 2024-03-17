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
        int n=s.length();
        int k=0;
        // for(int i=n-1;i>=0;i--){
        //     if(s[n-1]=='5' || s[n-1]=='0' && stoi(s)%25==0){
        //         cout<<k;
        //         break;
        //     }
        //     else if(s[n-1]=='5' || s[n-1]=='0' && stoi(s)%25!=0){
        //         continue;
        //     }
        //     else{
        //         s.erase(s[i]);
        //         i--;
        //         k++;
        //     }
        // }
        if(s[n-1]=='5' || s[n-1]=='0' && stoi(s)%25==0){
            cout<<k<<endl;
        }
        else{
            for(int i=n-2;i>=0;i--){
                if(s[i]=='5' || s[i]=='0' && stoi(s)%25==0){
                    cout<<k<<endl;
                }
                else{
                    s.erase(i);
                    k++;
                }
            }
        }

    }
}