#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
// string str="pavitra";
// cout<<str<<endl;
// str[1]='o';
// cout<<str<<endl;
// for(int i=0;str[i]!='\0';i++){
//     if(i%2==0) str[i]='a';
// }
// cout<<str<<endl;
// cout<<str.size()<<endl;
// cout<<str.length()<<endl;

// str.push_back('c');
// cout<<str<<endl;
// str.pop_back();
// cout<<str<<endl;

// string s="efg";
// str=str+s; // append
// cout<<str<<endl;
// str=str+"xyz";
// cout<<str<<endl;

// reverse first half
string s;
getline(cin,s);
int n=s.length();
reverse(s.begin()+0,s.begin()+n/2);
cout<<s;
return 0;
}