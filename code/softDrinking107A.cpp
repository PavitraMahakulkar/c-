#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,l,c,d,p,nl,np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    int drinks=k*l;
    drinks=drinks/nl;
    int total_slices=c*d;
    int total_salt=p/np;
    int ans=min(min(drinks,total_slices),total_salt)/n;
    cout<<ans<<endl;
}