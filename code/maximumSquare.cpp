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
        int maxi=INT_MIN;
        vector<int> ele;
        sort(v.rbegin(), v.rend());
        for(int i=0;i<n;i++){
            int c=0;
            for(int j=0;j<n;j++){
                if(v[j]>=v[i]) c++;
            }
            if(c>v[i]){
                ele.push_back(v[i]);
            }
            else ele.push_back(c);
        }
        cout<<*max_element(ele.begin(),ele.end())<<endl;
    }
}