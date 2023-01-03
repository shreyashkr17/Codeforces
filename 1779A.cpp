#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
    ll n;
    cin>>n;

    string s;
    cin>>s;
        
    ll r=0,l=0;

    for(int i=0;i<n;i++){
        if(s[i] == 'R'){
            r++;
        }else{
            l++;
        }
    }

    if(r==0 || r==n){
        cout<<-1<<endl;
        return;
    }else{
        for(int i=0;i<n-1;i++){
            if(s[i]=='L' && s[i+1]=='R'){
                cout<<i+1<<endl;
                return;
            }else if(s[i]=='R' && s[i+1]=='L'){
                cout<<0<<endl;
                return;
            }
        }
    }
}
 
int main(){
    ll t;
    cin>>t;

    while(t--){
        solve();
    }
    return 0;
}