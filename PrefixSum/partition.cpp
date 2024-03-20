#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[]={1,2,3,4,5,6,7,5,45,43};
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=1;i<n;i++){
        arr[i]+=arr[i-1];
    }
    // bool flag=false;
    int idx=-1;
    for(int i=1;i<n;i++){
        if(2*arr[i]==arr[n-1]){
            // flag=true;
            idx=i;
            break;
        }
    }
    // if(flag==true) cout<<"It can be partitioned";
    if(idx!=-1) cout<<"It can be partitioned after "<<idx;
    else cout<<"It cannot be partitoned";
}