#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int N=1e7+9;
vector<bool> isPrime(N,1);
int main()
{
    isPrime[0]=isPrime[1]=false;
    for(int i=2;i<N;i++){
        if(isPrime[i]==true){
            for(int j=2*i;j<N;j+=i){
                isPrime[j]=false;
            }
        }
    }
    int q;
    cin>>q;
    while(q--){
        int k;
        cin>>k;
        if(isPrime[k]){
            cout<<"It is a prime number"<<endl;;
        }
        else{
            cout<<"It is not a prime number"<<endl;
        }
    }
}