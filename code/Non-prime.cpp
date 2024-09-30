#include <bits/stdc++.h>
using namespace std;
bool isPrime(int N){
    if(N<=1) return 0;
    for(int i=2;i<sqrt(N);i++){
        if(N%i==0) return 0;
    }
    return 1;
}
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    vector<int> v(n);
	    int sum=0;
	    for(int i=0;i<n;i++){
	        cin>>v[i];
	        sum+=v[i];
	    }
	    
	    int i=1;
	    int j=n;
	    bool flag=false;
	    int idx1=0;
	    int idx2=0;
	    while(i<j){
	        if(isPrime(v[i]+v[j])==0){
	            idx1=i;
	            idx2=j;
	            flag=true;
	        }
	        else{
	            if(v[i]+v[j]<=2){
	                if(v[i]<v[j]) i++;
	                else j--;
	            }
	            else j--;
	        }
	    }
	    if(flag) cout<<idx1<<" "<<idx2<<endl;
	    else cout<<-1<<endl;
	}
}
