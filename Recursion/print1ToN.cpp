#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// void print(int i,int n){
//     if(i>n) return;
//     cout<<i<<endl;
//     print(i+1,n);

// }
void print(int n){
    if(n==0) return;
    print(n-1);
    cout<<n<<endl;
}

int main()
{
// int n;
// cin>>n;
//print(1,n);
print(4);
return 0;
}