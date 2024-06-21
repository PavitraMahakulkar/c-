#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    stringstream ss;
    ss<<5;
    int val;
    if(ss>>val){
        cout<<"good";
    }
    else{
        cout<<"not good";
    }
}