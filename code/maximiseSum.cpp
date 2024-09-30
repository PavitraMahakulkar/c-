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
	    int sum=0;
	    int c=0;
	    for(int i=0;i<n;i++){
	        cin>>v[i];
	        if(v[i]<0) c++;
	    }
	    sort(v.begin(),v.end());
	   for(int x:v){
		if(x>0) sum+=x;
	   }
	   int i=0;
	   int j=1;
	   while(i<j && i<n-2 && j<n-1){
		if(v[i]<0 && v[j]<0){
			v[i]=abs(v[i]);
			v[j]=abs(v[j]);
			sum+=(v[i]+v[j]);
			i++;
			j++;
		}
		else if(v[i]<0 && v[j]>=0) j++;
		else if(v[j]<0 && v[i]>=0) i++;
		else{
			i++;
			j++;
		}
	   }
	    cout<<sum<<endl;
	}
}
