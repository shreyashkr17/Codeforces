#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long
 
int main(){
    ll t;
    cin>>t;

    while(t--){
        ll n,k;
        cin>>n>>k;

        vector<ll> v(n);

        // map<ll,ll> mp;
        vector<pair<ll,ll>> vp(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
            // mp[v[i]] = i;
            vp[i].first = v[i];
            vp[i].second = i;
        }   
        ll ans = 1;
        sort(vp.begin(),vp.end());

        for(int i=0;i<n-1;i++){
            if(vp[i].second+1 != vp[i+1].second){
                ans++;
            }
        }

        if(ans<=k){
            cout<<"Yes"<<endl;
        }else{
            cout<<"No"<<endl;
        }
    }
    return 0;
}