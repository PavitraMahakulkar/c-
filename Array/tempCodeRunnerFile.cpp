
#include<bits/stdc++.h>
using namespace std;
int main()
{
string str="pavitra";
cout<<str<<endl;
// str[1]='o';
// cout<<str<<endl;
for(int i=0;str[i]!='\0';i++){
    if(i%2==0) str[i]='a';
}
cout<<str<<endl;
cout<<str.size()<<endl;
cout<<str.length()<<endl;