for(int i=0;i<n;++i){
            int res=mul%m;
            cout<<res<<" ";
            if(s[i]=='L'){
                mul=mul/v[i];
            }
            else if(s[i]=='\0') break;
            else{
                int k=n;
                mul=(mul/v[k-1]);
                k=n-1;
            }
        }