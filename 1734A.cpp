#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll int t;
    cin>>t;
    while(t--){
        ll int n;
        cin>>n;

        vector<ll int> v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }

        sort(v.begin(),v.end());

        ll int ans = INT_MAX; 

        for(int i=2;i<n;i++){
            ans = min(ans,v[i]-v[i-2]);
        }

        cout<<ans<<endl;
    }
    return 0;
}