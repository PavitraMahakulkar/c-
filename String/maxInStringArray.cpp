#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
string arr[]={"123","5678","0034","01234","9874","2301"};
int max=stoi(arr[0]);
string maxS=arr[0];
for(int i=1;i<=5;i++){
    int x=stoi(arr[i]);
    if(max<x) {
        max=x;
}
cout<<max;
return 0;
}
}