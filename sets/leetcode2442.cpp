#include<iostream>
#include<bits/stdc++.h>
using namespace std;
//  NOT WORKING AS INTENDED
int reverse(int n){
    int r=0;
    while(n>0){
        r*=10;
        r+=(n%10);
        n/=10;
    }
    return r;
}
int main()
{
        int N;
        cin>>N;
        cout<<endl;
        vector<int> nums;
        for(int i=0;i<N;i++){
            int k;
            cin>>k;
            nums.push_back(k);
        }
        int n=nums.size();
        unordered_set<int> s;
        for(int i=0;i<n;i++){
            int rev=reverse(nums[i]);
            s.insert(nums[i]);
            s.insert(rev);
        }
        return s.size();
}