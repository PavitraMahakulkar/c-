#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int c1=0;
    int c2=0;
    int c3=0;
    int c4=0;
    while(n--){
        int a,b;
        cin>>a>>b;
        if(a==1){
            c1++;
        }
        else if(a==0){
            c2++;
        }
        else if(b==1){
            c3++;
        }
        else if(b==0){
            c4++;
        }
    }
    int reqans=min(c1,c2)+min(c3,c4);
    cout<<reqans<<endl;
    return 0;
}