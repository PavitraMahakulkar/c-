#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void removeElement(int arr, int a[],int idx,int n){
    if(idx==n){
        cout<<a<<endl;
        return;
    }
    int k=a[idx]; 
    if(a[idx]==3) removeElement(arr,a,idx+1,n);
    else removeElement(k+arr,a,idx+1,n);
}
int main()
{
    int a[]={1,2,3,4,3,4,5,3};
    int n=sizeof(a)/sizeof(a[1]);
    removeElement({},a,1,n);
}
//to be continued