#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    vector<int> v(n);
	    for(int i=0;i<n;i++){
	        cin>>v[i];
	    }
	    int c=0;
	    int sum=0;
	    int sum1=0;
	    int c1=0;
	    int l=0;
	    int r=n-1;
	    while(l<n){
	        if(v[l]>0) break;
	        l++;
	    }
	    while(r>=0){
	        if(v[r]>0) break;
	        r--;
	    }
	    for(int i=l;i<=r;i++){
	        if(v[i]<0){
	            c++;
	            v[i]=0;
	        }
	        sum+=v[i];
	    }
	   // vector<int> pre(n);
	   // pre[0]=v[0];
	   // for(int i=;i<n;i++){
	   //     pre[i]=pre[i-1]+v[i];
	   // }
	    if(sum==0) cout<<0<<endl;
	    else cout<<c<<endl;
	}
}