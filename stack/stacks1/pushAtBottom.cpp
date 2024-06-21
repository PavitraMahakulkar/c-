#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void print(stack<int>& st){
    stack<int> temp;
    while(st.size()>0){
        //int x=st.top(); 
        temp.push(st.top());     
        st.pop();
        //temp.push(x);
    }
    cout<<endl;
    // Putting  elements back from temp to st
    while(temp.size()>0){
        //int x=temp.top();
        cout<<temp.top()<<" ";
        st.push(temp.top());
        temp.pop();
        //st.push(x);
    }
}
void pushAtBottom(stack<int>& st, int val){
    stack<int> temp;
    while(st.size()>0){ 
        temp.push(st.top());     
        st.pop();
    }
    st.push(val);
    while(temp.size()>0){
        st.push(temp.top());
        temp.pop();
    }
}
void pushAtIndex(stack<int>& st,int idx, int val){
    stack<int> temp;
    // By me
    //int i=0;
    // while(st.size()>0){ 
    //     temp.push(st.top());     
    //     st.pop();
    // }
    // while(temp.size()>0){
    //     i++;
    //     if(i==idx) st.push(val);
    //     st.push(temp.top());
    //     temp.pop();
    // }
    while(st.size()>idx){ 
        temp.push(st.top());     
        st.pop();
    }
    st.push(val);
    while(temp.size()>0){
        st.push(temp.top());
        temp.pop();
    }
}
int main()
{
    stack<int> st;
    stack<int> gt;
    stack<int> rt;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    print(st);
    cout<<endl;
    pushAtBottom(st, 80);
    print(st);
    pushAtIndex(st,3,90);
    print(st);
}