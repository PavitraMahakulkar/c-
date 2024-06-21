#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<vector<int>> v(n, vector<int> (2));
    vector<int> v1;
    for(int i=0;i<n;i++){
        for(int j=0;j<2;j++){
            cin>>v[i][j];
        }
    }
    int c1=0;
    int c2=0;
    int c3=0;
    int c4=0;
    int value=0;
    for(int i=0;i<n;i++){
        int a=v[i][0];
        int b=v[i][1];
        c1=c2=c3=c4=0;
        for(int j=0;j<n;j++){
            if(v[j][0]==a && v[j][1]>b) c1++;
            if(v[j][0]==a && v[j][1]<b) c2++;
            if(v[j][1]==b && v[j][0]>a) c3++;
            if(v[j][1]==b && v[j][0]<a) c4++;

            // if(v[j][0]==a){
            //     if(v[j][1]>b) c1++;
            //     if(v[j][1]<b) c2++;
            // }
            // if(v[j][1]==b){
            //     if(v[j][0]>a) c3++;
            //     if(v[][0]<a) c4++;
            // }
            
        }
        if(c1>0 && c2>0 && c3>0 && c4){
            value++;
        }
        
    }
    cout<<value<<endl;
}