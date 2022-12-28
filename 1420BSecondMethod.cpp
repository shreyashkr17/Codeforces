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

        sort(v.begin(),v.end());

        map<ll,ll> cnt,mp;
        for(int i=0;i<n;i++){
            ll temp = v[i];
            ll x = 0;
            while(temp > 0){
                temp/=2;
                x++;
            }

            cnt[x]++;
            mp[v[i]] = x;
        }
        // for(auto)
        ll ans = 0;
        for(int i = 0;i<n;i++){
            cnt[mp[v[i]]]--;
            // cout<<cnt[mp[v[i]]]<<endl;
            ll t_ans = cnt[mp[v[i]]];
            ans+=(t_ans);
        }
        
        cout<<ans<<endl;
    }
    return 0;
}