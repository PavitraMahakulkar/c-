#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    deque<int> dq;
    dq.push_back(10);
    dq.push_back(20);
    dq.push_back(30);
    dq.pop_back();
    dq.pop_front();
    dq.push_front(70);
    cout<<dq.size();
}