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

        vector<int> v(n);
        ll sum = 0;

        for(int i=0;i<n;i++){
            cin>>v[i];
            sum+=v[i];
        }

        ll k =sum%n;

        ll ans = k*(n-k);

        cout<<ans<<endl;

    }
    return 0;
}