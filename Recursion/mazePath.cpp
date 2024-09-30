#include<iostream>
#include<bits/stdc++.h>
using namespace std;
// This code is for traversing a matrix of any
// order for reaching the end point from
// starting point, which can be any point using
// only down path and right path
int maze(int sr,int sc,int er,int ec){
    if(sr>er || sc>ec) return 0;
    if(sr==er && sc==ec) return 1;
    int rightWays=maze(sr,sc+1,er,ec); // right
    int downWays=maze(sr+1,sc,er,ec); // down
    int totalWays=downWays+rightWays;
    return totalWays;
}
// This code prints the path
void printPath(int sr,int sc,int er,int ec,string s){
    if(sr>er || sc>ec) return;
    if(sr==er && sc==ec){
         cout<<s<<endl;
         return;
    }
    printPath(sr,sc+1,er,ec,s+"R");
    printPath(sr+1,sc,er,ec,s+"D");
}
int maze2(int row,int col){
    if(row<1 || col<1) return 0;
    if(row==1 && col==1) return 1;
    int rightWays=maze2(row,col-1);// right
    int downWays=maze2(row-1,col);// down
    int totalWays=downWays+rightWays;
    return totalWays;
}
int main()
{
    printPath(0,0,2,2,"");
    cout<<maze(0,0,2,2)<<endl;
    cout<<maze2(3,3); // Here, initial sr and sc is 1.
}