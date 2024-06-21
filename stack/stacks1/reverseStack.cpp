#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void print(stack<int> st){
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
    // empty st into gt
    while(st.size()>0){
        gt.push(st.top());
        st.pop();
    }
    // empty gt into rt
    while(gt.size()>0){
        rt.push(gt.top());
        gt.pop();
    }
    // empty rt into st
    while(rt.size()>0){
        st.push(rt.top());
        rt.pop();
    }
    print(st);
}