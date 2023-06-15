#include <iostream>
// #include <bits/stdc++.h>
#include <vector>
#include <algorithm>
using namespace std;
#define ll long long

void solve(){
    ll n,m;
    cin>>n>>m;

    vector<vector<ll>> arr(n,vector<ll>(m));
    for(int i = 0;i<n;i++){
        for(int j = 0;j<m;j++){
            cin>>arr[i][j];
        }
    }

    ll ans = 0;

    for(int i =0;i<m;i++){
        vector<ll> tempArr;
        for(int j =0;j<n;j++){
            tempArr.push_back(arr[j][i]);
        }
        sort(tempArr.begin(),tempArr.end());

        for(int k = 0;k<n;k++){
            ans += (k* tempArr[k]);
            ans -= (n-k-1)*(tempArr[k]);
        }
    }

    cout<<ans<<endl;
}
 
int main(){
    ll t;
    cin>>t;

    while(t--){
        solve();
    }
    return 0;
}