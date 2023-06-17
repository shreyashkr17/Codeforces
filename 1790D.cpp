#include <iostream>
// #include <bits/stdc++.h>
#include <map>
#include <set>
#include <algorithm>
using namespace std;
#define ll long long
 
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        map<ll,ll> mp;
        set<ll> b;
        for(int i = 0;i<n;i++){
            ll x;
            cin>>x;
            mp[x]++;
            b.insert(x);
            b.insert(x+1);
        }

        // for(auto mpElement:mp){
        //     cout<<mpElement.first<<" "<<mpElement.second<<endl;
        // }

        // cout<<endl;

        // for(auto it:b){
        //     cout<<it<<" ";
        // }
        // cout<<endl;

        ll last = 0;
        ll res = 0;

        for(auto x:b){
            ll c = mp[x];
            // cout<<"x:"<<x<<"mp[x]:"<<mp[x]<<" "<<"last:"<<last<<endl;
            // cout<<c-last<<endl;
            res+=max(0LL,c-last);
            last = c;
        }

        cout<<res<<endl;
        
    }
    return 0;
}