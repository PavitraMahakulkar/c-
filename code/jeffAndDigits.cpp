#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    stack<int> st;
    int c=0;
    int cf=0;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        if(x==5){
            st.push(x);
            cf++;
        }
        else c++;
    }
    int sum=cf*5;
    while(st.size()>0){
        if(sum%9==0) break;
        sum-=st.top();
        st.pop();
    }
    int k=sum/5;
    string str="";
    if(sum==0 && c>0) cout<<0;
    //else if(sum==0 && c==0) cout<<-1;
    else if(c>0){
        for(int i=0;i<k;i++){
            str+='5';
        }
        for(int i=0;i<c;i++){
            str+='0';
        }
        cout<<str;
    }
    else cout<<-1;
}