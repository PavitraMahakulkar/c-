#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        int c=0;
        int i=0,j=n-1;
        while(i<j){
            if(abs(v[i]-v[j])==1 || abs(v[i]-v[j])==2 || abs(v[i]-v[j] && v[i+1]-v[i]<=1 && v[j-1]-v[j]<=1)==0){
                c++;
            }
            else{
                c=0;
            }
            i++;
            j--;
        }
        if(c>0) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}

// NOT COMPLETED OR WRONG ANSWER