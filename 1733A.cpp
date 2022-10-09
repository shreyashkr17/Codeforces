#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll int t;
    cin>>t;

    while(t--){
        ll int n,k,x;
        cin>>n>>k;

        vector<ll int> v(k);

        for(int i=0;i<n;i++){
            cin>>x;
            v[i%k]=max(v[i%k],x);
        }

        ll int res=0;
        for(int i=0;i<k;i++){
            res+=v[i];
        }
        cout<<res<<endl;
    }
    return 0;
}