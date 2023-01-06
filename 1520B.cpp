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

        vector<ll> v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }

        map<ll,ll> mp;

        for(int i=0;i<n;i++){
            mp[v[i]-i-1]++;
        }

        ll res = 0;

        for(auto i:mp){
            ll num = i.second;
            res+= (num*(num-1))/2;
        }

        cout<<res<<endl;
    }
    return 0;
}