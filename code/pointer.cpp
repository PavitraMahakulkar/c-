#include<bits/stdc++.h>
using namespace std;
int main()
{
    int c = 5;
    int *p = &c;

    cout<<*p<<endl;
    cout<<p<<endl;
    cout<<&c<<endl;
    //p++;
    cout<<c<<endl;
    //*(p++);
    c++;

    cout<<c<<endl;

    cout<<*p<<endl;
}