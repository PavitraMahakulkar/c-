#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int min=v[0];
    int max=v[0];
    int c=0;
    for(int i=1;i<n;i++){
        if(max<v[i]){
            max=v[i];
            c++;
        }
        if(min>v[i]){
            min=v[i];
            c++;
        }
    }
    cout<<c<<endl;
}