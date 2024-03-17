#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    // if(n==1){
    //     cout<<-1;
    //     return 0;
    // }
    if(n%2!=0){
        cout<<-1<<endl;
    }
    else{
        int arr[n+1];
        for(int i=0;i<=n;i++){
            arr[i]=i;
        }
        for(int i=1;i<=n-1;i++){
            swap(arr[i],arr[i+1]);
            i++;
        }
        for(int i=1;i<=n;i++){
            cout<<arr[i]<<" ";
        }
    }
    return 0;
    // vector<char> v;
    // for(int i=0;i<n;i++){
    //     v.push_back(i);
    // }
    // for(int i=1;i<=n;i++){
    //     swap()
    // }
    // if(n%2==0){
    //     for(auto ele: v){
    //     cout<<ele<<" ";
    // }
    // }
    // else{
    //     cout<<-1;
    // }
}  