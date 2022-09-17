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

        ll int res=v[0];
        for(int i=1;i<n;i++){
            res&=v[i];

        }

        cout<<res<<endl;        
    }
    return 0;
}