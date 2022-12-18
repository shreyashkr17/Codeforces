#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long
 
int main(){
    ll t;
    cin>>t;

    while(t--){
        ll n;
        cin>>n;

        ll ans = 0;

        while(((ans)*(ans+1))/2 < n){
            ans++;
        }

        if((ans*(ans+1))/2 == n+1){
            ans++;
        }

        cout<<ans<<endl;
    }
    return 0;
}   