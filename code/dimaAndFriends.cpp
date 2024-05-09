#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int sum=0;
    for(int i=0;i<n;i++){
        int k;
        cin>>k;
        sum+=k;
    }
    int c=0;
    int p=(sum%(n+1));
    for(int i=1;i<=5;i++){
        p+=1;
        if(p>n+1){
            p=1;
        }
        else if(p!=1){
            c++;
        }
    }
    cout<<c;
}