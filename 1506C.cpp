#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ll int t;
    cin>>t;
    
    while(t--){
        string str1,str2;
        cin>>str1>>str2;

        ll int n=str1.length();
        ll int m = str2.length();

        ll int x= min(n,m),ans=0;

        for(ll int len = 1;len<=x;len++){
            for(int i=0;i+len<=n;i++){
                for(int j=0;j+len<=m;j++){
                    if(str1.substr(i,len) == str2.substr(j,len)){
                        ans = max(ans,len);
                    }
                }
            }
        }

        ll int res = ((n+m) - (2*ans));

        cout<<res<<endl;
    }
    return 0;
}