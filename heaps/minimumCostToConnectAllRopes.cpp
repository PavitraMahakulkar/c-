#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v={2,7,4,1,8};
    int n=v.size();
    priority_queue<int> pq;
    for(int i=0;i<n;i++){
        pq.push(-v[i]);
    }
    int sum=0;
    while(pq.size()>1){
        int x=pq.top();pq.pop();
        int y=pq.top();pq.pop();
        pq.push(y+x);
        sum+=(x+y); 
    }
    cout<<-sum;
}