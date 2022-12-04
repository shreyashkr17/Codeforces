#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long
 
int main(){
    ll t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;

        int cnt0=0,cnt1=0;

        for(int i=0;i<s.size();i++){
            if(s[i]=='0'){
                cnt0++;
            }else{
                cnt1++;
            }
        }   
        string ans;
        int n=s.size();

        // cout<<cnt1<<" "<<cnt0<<endl;
        
        if(cnt1==n || cnt0==n){
            for(int i=0;i<2*n;i++){
                ans+=s[0];
            }
        }else{
            if(s[0]=='0'){
                ans+='0';

                for(int j = 1;j<(2*n-2);j++){
                    if(j%2){
                        ans+='1';
                    }else{
                        ans+='0';
                    }
                }
            }else{
                ans+='1';

                for(int j=1;j<(2*n-2);j++){
                    if(j%2){
                        ans+='0';
                    }else{
                        ans+='1';
                    }
                }
            }
        }

        cout<<ans<<endl;
    }
    return 0;
}   