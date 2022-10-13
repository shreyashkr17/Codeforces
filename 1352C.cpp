#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define ll long long
int main(){
    ll t;
    cin>>t;

    while(t--){
        ll n,k;
        cin>>n>>k;

        ll res = (k-1)/(n-1);

        cout<<k+res<<endl;
    }
    return 0;
}