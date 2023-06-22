#include <iostream>
// #include <bits/stdc++.h>
#include <vector>
using namespace std;
#define ll long long


vector<vector<int>> v;
vector<ll> cnt;

void dfs(ll i, ll p){
    if(v[i].size() == 1 && v[i][0] == p){
        cnt[i] = 1;
    }else{
        for(auto u: v[i]){
            if(u != p){
                dfs(u,i);
                cnt[i] += cnt[u];
            }
        }
    }
}
void solve(){
    ll n;
    cin>>n;

    v.assign(n,vector<int>());
    for(int i = 0;i<n-1;i++){
        ll a,b;
        cin>>a>>b;
        a--,b--;

        v[a].push_back(b);
        v[b].push_back(a);
    }

    cnt.assign(n,0);

    dfs(0,-1);

    // cout<<"Vector Matrix V: "<<endl;
    // for(int i = 0;i<n;i++){
    //     for(auto it: v[i]){
    //         cout<<it<<" ";
    //     }
    //     cout<<endl;
    // }

    // cout<<"cnt vector:"<<endl;

    // for(auto it2:cnt){
    //     cout<<it2<<" ";
    // }
    // cout<<endl;

    ll q;
    cin>>q;

    for(int i = 0;i<q;i++){
        ll x,y;
        cin>>x>>y;
        x--,y--;

        ll res = cnt[x]*cnt[y];
        cout<<res<<endl;
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