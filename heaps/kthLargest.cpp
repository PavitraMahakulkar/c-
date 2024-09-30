#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[]={10,20,-4,5,18,24,1,-7,56};
    int k=3;
    int n=sizeof(arr)/4;
    // sort(arr, arr+n);  // T.C -> O(nlogn)
    // cout<<arr[n-k]<<endl;
    priority_queue<int, vector<int>, greater<int>> pq; // minHeap
    for(int i=0;i<n;i++){
        pq.push(arr[i]);  // T.C -> O(nlogk), it is slightly better than the above.
        if(pq.size()>k) pq.pop();
    }
    cout<<pq.top()<<endl;
}