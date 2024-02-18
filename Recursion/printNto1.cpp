#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// recursion makes new variable every time, if it has a variable
void print(int n){
    if(n==0) return; // base case
    cout<<n<<endl; // kaam
    print(n-1); // call
    }

int main(){
int x;
cin>>x;
print(x);
return 0;
}