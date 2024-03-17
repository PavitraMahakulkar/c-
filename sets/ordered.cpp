#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    // set<int> s; // ordered set sort the elements in it.
    // s.insert(2);
    // s.insert(5);
    // s.insert(3);
    // for(int ele: s){
    //     cout<<ele<<" ";
    // }
    // map<int, int> m;
    // m[3]=30;
    // m[1]=20;
    // m[2]=10;
    // for(auto ele:m){
    //     cout<<ele.first<<" ";
    //     cout<<ele.second<<" ";
    // }
    map<string, int> m;
    m["Pavitra"]=30;
    m["haha"]=20;
    m["huhuhu"]=10;
    for(auto ele:m){
        cout<<ele.first<<" ";
        cout<<ele.second<<" ";
    }
}