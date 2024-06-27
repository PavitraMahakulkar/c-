#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[]={3,1,2,7,4,6,2,3};
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int nge[n];

    // Brute Force : TC=O(n^2), SC=O(1)

    // for(int i=0;i<n;i++){
    //     nge[i]=-1;
    //     for(int j=i+1;j<n;j++){
    //         if(arr[j]>arr[i]){
    //             nge[i]=arr[j];
    //             break;
    //         }
    //     }
    // }
    // for(int i=0;i<n;i++){
    //     cout<<nge[i]<<" ";
    // }
    // cout<<endl;

    // Using a Stack: pop, ans, push & reverse traverse
    // SC= O(n), TC= O(n)
    stack<int> st;
    nge[n-1]=-1;
    st.push(arr[n-1]);
    for(int i=n-2;i>=0;i--){
        // pop all the elements smaller than arr[i]
        while(st.size()>0 && st.top()<=arr[i]) st.pop();
        // mark the ans inn nge array
        if(st.size()==0) nge[i]=-1;
        else nge[i]=st.top();
        // push tthe arr[i]
        st.push(arr[i]);
    }

    for(int i=0;i<n;i++){
        cout<<nge[i]<<" ";
    }
    cout<<endl;

}