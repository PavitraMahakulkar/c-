#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
int k,n;
cin>>k>>n;
vector<int> arr;
for(int i=0;i<n;i++){
    int q;
    cin>>q;
    arr.push_back(q);
}
int max=0;
vector<int> v;
for(int i=0;i<k;i++){
    if(max<arr[i]) max=arr[i];
    v.push_back(max);
}
for(int i=k;i<n;i++){
    int cmax=max;
    if(cmax)
}
return 0;
}