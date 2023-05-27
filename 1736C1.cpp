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

        vector<ll> v(n+5,0);
        ll ans = 0;
        for(ll i = 1;i<=n;i++){
            ll x;
            cin>>x;
            v[i] = min(v[i-1]+1,x);
            ans += v[i];
        }

        cout<<ans<<endl;

    }
    return 0;
}