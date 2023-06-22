#include <iostream>
// #include <bits/stdc++.h>
#include <vector>
#include <algorithm>
using namespace std;
#define ll long long
 
int main(){
    ll t;
    cin>>t;

    while(t--){
        ll n;
        cin>>n;

        vector<int> v(n);

        for(int i = 0;i<n;i++){
            cin>>v[i];
        }

        sort(v.begin(),v.end());
        ll start = 0, end= n-1;
        ll ans = 0;

        while(start <= end){
            ans += v[end]-v[start];
            start++;
            end--;
        }

        cout<<ans<<endl;
    }
    return 0;
}