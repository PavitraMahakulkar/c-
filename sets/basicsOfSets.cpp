#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    unordered_set<int> s;
    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(4);
    s.insert(5);
    s.insert(1);
    cout<<s.size()<<endl;
    s.erase(2);
    cout<<s.size()<<endl;
    int target=0;
    if(s.find(target)!=s.end()){
        cout<<"exists"<<endl;
    }
    else{
        cout<<"does not exists"<<endl;
    }
    for(int ele : s){
        cout<<ele<<" ";
    }
}