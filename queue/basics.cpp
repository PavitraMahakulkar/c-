#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void revDisplay(queue<int>&  q){
    int n=q.size();
    stack<int> st;
    for(int i=1;i<=n;i++){
        int x=q.front();
        st.push(x);
        q.pop();
        q.push(x);
    }
    while(st.size()>0){
        cout<<st.top()<<" ";
        st.pop();
    }
    cout<<endl;
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
    revDisplay(q);
    cout<<q.size()<<endl;
    cout<<q.front()<<endl;
    cout<<q.back()<<endl;
    q.pop();
    cout<<q.size()<<endl;
    cout<<q.front()<<endl;
    display(q);
}