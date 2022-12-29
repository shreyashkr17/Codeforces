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

        ll mx=INT_MIN;

        vector<ll> v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];

            mx = max(mx,v[i]);
        }

        sort(v.begin(),v.end());

        ll ans1 = v[n-1]*v[n-2]*v[n-3]*v[n-4]*v[n-5];
        ll ans2 = v[n-1]*v[n-2]*v[n-3]*v[0]*v[1];
        ll ans3 = v[0]*v[1]*v[2]*v[3]*v[n-1];
        ll ans;
        ans = max({ans1,ans2,ans3});
        cout<<ans<<endl;
    }
    return 0;
}