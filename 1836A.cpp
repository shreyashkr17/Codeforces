#include <iostream>
// #include <bits/stdc++.h>
#include <vector>
using namespace std;
#define ll long long

void solve(){
    ll n;
    cin>>n;

    vector<ll> v(n+1);

    for(int i = 0;i<n;i++){
        ll x;
        cin>>x;

        if(x < n){
            v[x]++;
        }else{
            v[n] = 1e6;
        }
    }

    bool flag = true;
    for(int i = 1;i<=n;i++){
        if(v[i] > v[i-1]){
            flag = false;
            break;
        }
    }

    if(flag){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
}

int main(){
    ll t;
    cin>>t;

    while ((t--))
    {
        solve();
    }
    
    return 0;
}