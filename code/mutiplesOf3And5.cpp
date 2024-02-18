// ..Q..... If we list all the natural numbers below 10 that are multiples of 3 or 5,
//  we get 3, 5, 6 and 9. The sum of these multiples is 23.
// Find the sum of all the multiples of 3 or 5 below the provided parameter value number.

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int multiplesOf3Or5(int n){
    if(n==2) return 0;
    if((n-1)%5==0) n+=n-1;
    if((n-1)%3==0) n+=n-1;
    int s=n;
    multiplesOf3Or5(n-1);
    return s;
}
int main()
{
    cout<<multiplesOf3Or5(10);
}