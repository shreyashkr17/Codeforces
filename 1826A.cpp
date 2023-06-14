#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
    ll n;
    cin>>n;

    vector<int> v(n);

    for(int i=0;i<n;i++){
        cin>>v[i];
    }

    for(int cntL = 0;cntL<=n;cntL++){
        int actual = 0;
        for(auto j: v){
            if(!(cntL >= j)){
                actual++;
            }
        }

        if(actual == cntL){
            cout<<cntL<<endl;
            return;
        }
    }
    cout<<"-1"<<endl;
}
 
int main(){
    ll t;
    cin>>t;

    while
    (t--){
        solve();
    }
    return 0;
}