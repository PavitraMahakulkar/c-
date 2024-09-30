#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[]={6,5,3,2,8,10,9}; // The question asked is that we have to sort an array of k sorted elements, means if there is an element upon sorting moves away from the range of k, it will not work.
    int k=3;
    int n=sizeof(arr)/4;
    // vector<int> v;
    int idx=0;
    for(int i=0;i<n;i++) cout<<arr[i]<<" ";
    cout<<endl;
    priority_queue<int, vector<int>, greater<int>> pq; // minHeap
    for(int i=0;i<n;i++){
        pq.push(arr[i]);
        if(pq.size()>k){
            // v.push_back(pq.top());
            arr[idx++]=pq.top(); // No extra array is required, the operation id happening in-place.
            pq.pop();
        }
    }
    while(pq.size()>0){
        // v.push_back(pq.top());
        arr[idx++]=pq.top();
        pq.pop();
    }
    for(int i=0;i<n;i++) cout<<arr[i]<<" ";
    // leetcode- 378, 1636 are homework
}