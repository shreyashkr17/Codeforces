#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long 

void solve(){
    ll int n;
    cin>>n;

    vector<ll int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }

    sort(v.begin(),v.end());

    for(int i=n-1;i>=0;i--){
        if(v[i]<=i+1){
            cout<<i+2<<endl;
            return;
        }
    }

    cout<<1<<endl;
}
int main(){
    ll int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}