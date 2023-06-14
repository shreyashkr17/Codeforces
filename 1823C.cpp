#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
    ll n;
    cin>>n;

    vector<int> v(n);
    for(int i =0 ;i<n;i++){
        cin>>v[i];
    }

    map<int,int> mp;

    for(int i =0 ;i<n;i++){
        int element = v[i];
        for(int j= 2;j*j<=element;j++){
            while(element % j == 0){
                element/=j;
                mp[j]++;
            }
        }
        if(element != 1){
            mp[element]++;
        }
    }

    int ans = 0,rem = 0;

    for(auto it:mp){
        int divisor = it.first;
        int divisorCnt = it.second;

        ans += divisorCnt/2;
        rem += divisorCnt%2;
    }

    ans += rem/3;

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