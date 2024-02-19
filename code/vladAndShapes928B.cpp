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
        
        vector<long long> arr;

        for(int i=0;i<n;i++){
            string str;
            
            cin>>str;
            long long k=0;

            for(int j=0;j<n;j++){
                if(str[j]=='1') k++;
            }

            if(k>0) arr.push_back(k);
        }

        if(arr[0]==arr[1]) cout<<"SQUARE"<<endl;
        else cout<<"TRIANGLE"<<endl;
    }
    
}