#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long
 
int main(){
    ll n;
    cin>> n;
    vector<ll> v(n),sorted(n);

    for(int i=0;i<n;i++){
        cin>>v[i];
        sorted[i] = v[i];
    }

    sort(sorted.begin(),sorted.end());

    vector<ll> preSum1(n),preSum2(n);
    preSum1[0] = v[0];
    preSum2[0] = sorted[0];

    for(ll i=1;i<n;i++){
        preSum1[i] = v[i]+preSum1[i-1];
        preSum2[i] = sorted[i]+preSum2[i-1]; 
    }

    ll m;
    cin>>m;

    while(m--){
        ll type,l,r;
        cin>>type>>l>>r;

        l= l-1;
        r= r-1;

        if(type == 1){
            cout<<preSum1[r]-preSum1[l]+v[l]<<endl;
        }else{
            cout<<preSum2[r]-preSum2[l]+sorted[l]<<endl;
        }
    }
    return 0;
}