#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        vector<int> v;
        vector<int> v1;
        string s;
        int n=8;
        while(n--){
            string s;
            cin>>s;
            int c = 0;
            for(int i=0;i<8;i++) {
                if(s[i]=='#') {
                    c++;
                    v.push_back(i+1);
                }
            }
            v1.push_back(c);
         
        }
        int row=0;
        for(int i=1;i<8-1;i++){
            if(v1[i-1]==2 && v1[i]==1 && v1[i+1]==2) row=i;
        }
        int sum=0;
        for(int i=0;i<row+1;i++){
            sum+=v1[i];
        }
        cout<<row+1<<" "<<v[sum-1]<<endl;

    }
}