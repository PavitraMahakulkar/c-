#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int l,r,L,R;
        cin>>l>>r>>L>>R;
        if(r<L) cout<<L-r<<endl;
        else if(R<l) cout<<l-R<<endl;
        else cout<<min(r,R)-max(l,L)+1<<endl;
        // int num=0;
        // if(L-r==1) num=1;
        // else if(r==R && l==L) num+=(r-l);
        // else if(l==L && R>r) num+=(R-r-1);
        // else if(R==r && L>l) num+=(L-l-1);
        // else if(l==L && R<r) num+=(r-R-1);
        // else if(R==r && L<l) num+=(l-L-1);
        // else if(R>r && L>l) num+=(r-L)+2;
        // else if(R<r && L<l) num+=(R-l)+2;
        // else if(R>r && L<l) num+=(r-l)+2;
        // else if(R<r && L>l) num+=(R-L)+2;
        // cout<<num<<endl;
    }
}