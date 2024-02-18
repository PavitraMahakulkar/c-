#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
string str="raghav is a maths teacher. he is a dsa mentor as well!.";
stringstream ss(str);
string temp;
vector<string> v;
while(ss>>temp){
    v.push_back(temp);
}
sort(v.begin(),v.end());
int count=1;
int maxCount=1;
for(int i=1;i<v.size();i++){
    if(v[i]==v[i-1]) count++;
    else count=1;
    maxCount=max(maxCount,count);
}
count=1;
for(int i=1;i<v.size();i++){
    if(v[i]==v[i-1]) count++;
    else count=1;
    if(maxCount==count){
        cout<<v[i]<<" "<<maxCount<<endl;
    }
}
return 0;
}