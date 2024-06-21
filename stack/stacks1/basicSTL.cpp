#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    stack<int> st;
    cout<<st.size()<<endl;
    st.push(10);
    // cout<<st.size()<<endl;
    st.push(20);
    // cout<<st.size()<<endl;
    st.push(30);
    st.push(40);
    cout<<st.size()<<endl;
    st.pop();
    cout<<st.size()<<endl;
    cout<<st.top()<<endl;
    st.push(40);
    st.push(50);
    // Printing in reverse order-> emptying the stack
    // while(st.size()>0){
    //     cout<<st.top()<<" ";
    //     st.pop();
    // }
    
    // we will use extra space
    stack<int> temp;
    while(st.size()>0){
        cout<<st.top()<<" ";
        //int x=st.top(); 
        temp.push(st.top());     
        st.pop();
        //temp.push(x);
    }
    cout<<endl;
    // Putting  elements back from temp to st
    while(temp.size()>0){
        //int x=temp.top();
        st.push(temp.top());
        cout<<temp.top()<<" ";
        temp.pop();
        //st.push(x);
    }
    cout<<endl<<st.top();
}