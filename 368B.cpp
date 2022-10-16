#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    set<ll> preSize;
    ll n,m;
    cin>>n>>m;

    vector<ll> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }

    for(int i=n-1;i>=0;i--){
        preSize.insert(v[i]);
        v[i] = preSize.size();
    }
    
    ll x;

    while(m--){
        cin>>x;
        cout<<v[x-1]<<endl;
    }
    return 0;
}