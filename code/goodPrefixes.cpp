#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        vector<long long> vec;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            vec.push_back(x);
        }
        //sort(v.begin(),v.end());
        vector<int> pre(n);
        long long c=0;
        long long maximum=INT_MIN;
        long long ele=0;
        for(int i=0;i<n;i++){
            maximum=max(maximum,vec[i]);
            ele+=vec[i];
            if(ele==maximum*2) c++;
        }
        cout<<c<<endl;
    }
}