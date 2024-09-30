#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    char a[]={'abc','aei'};
    int maxi=INT_MIN;
    int n=sizeof(a)/sizeof(a[0]);
    for(int i=0;i<n;i++){
        int N=sizeof(a[i])/4;
        int c=0;
        for(int j=0;j<N;j++){
            if(a[i][j]=='a' || a[i][j]=='e' || a[i][j]=='i' || a[i][j]=='o' || a[i][j]=='u'){
                c++;
            }
        }
        maxi=max(maxi,N-c);
    }
    int fact=1;
    for(int i=1;i<=maxi;i++){
        fact*=i;
    }
    cout<<fact;
}