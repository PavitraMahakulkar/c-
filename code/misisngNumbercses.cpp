#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin>>n;
    vector<int> v(n);
    long long sum1=0;
    long long sum2=0;
    for(int i=0;i<n-1;i++){
        cin>>v[i];
        sum1+=v[i];
    }
    for(int i=1;i<=n;i++){
        sum2+=i;
    }
    long long ele=sum2-sum1;
    cout<<ele;
    
}