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

        k--;

        ll temp = n/2;

        ll ans = (k+(n%2)*(k/temp))%n;

        cout<<ans+1<<endl;
    }
    return 0;
}