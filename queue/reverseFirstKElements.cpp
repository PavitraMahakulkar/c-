#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void reverseK(queue<int>& q, int k){
    int n=q.size();
    stack<int> st;
    for(int i=0;i<k;i++){
        int x=q.front();
        st.push(x);
        q.pop();
    }
    while(st.size()>0){
        q.push(st.top());
        st.pop();
    }
    for(int i=k;i<n;i++){
        int x=q.front();
        q.pop();
        q.push(x);
    }
}
void display(queue<int>& q){
    int n=q.size();
    for(int i=1;i<=n;i++){
        int x=q.front();
        cout<<x<<" ";
        q.pop();
        q.push(x);
    }
    cout<<endl;
}
int main()
{
    queue<int> q;
    // push, pop, front, back, size, empty
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    display(q);
    int k=3;
    reverseK(q,k);
    display(q);
}