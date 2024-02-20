// ..Q..... If we list all the natural numbers below 10 that are multiples of 3 or 5,
//  we get 3, 5, 6 and 9. The sum of these multiples is 23.
// Find the sum of all the multiples of 3 or 5 below the provided parameter value number.

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int multiplesOf3Or5(int n){
    // if(n=0){return 0;}
    // else if(n%3==0 || n%5==0){
    //     return n+multiplesOf3Or5(n-1);
    // }
    // else{
    //     return multiplesOf3Or5(n-1);
    // }
    int a=(n/2)*(2*3+(n-1)*3);
    int b=(n/2)*(2*5+(n-1)*5);
    int c=(n/2)*(2*15+(n-1)*15);
    return (a+b)-c;
}
int main()
{
    cout<<multiplesOf3Or5(10);
}