#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long
 
int main(){
    ll t;
    cin>>t;

    while(t--){
        ll n,r;
        cin>>n>>r;

        ll ans=0;
        if(n>r){
            ans = ((r)*(r+1))/2LL;
            cout<<ans<<endl;
        }else{
            ll temp = n-1;

            ans = ((temp)*(temp+1))/2LL;

            ans++;
            cout<<ans<<endl;
        }
    }
    return 0;
}   