#include <iostream>
// #include <bits/stdc++.h>
#include <vector>
using namespace std;
#define ll long long
 
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        vector<ll> v(n);
        ll diffSum = 0;
        for(ll i = 0;i<n;i++){
            cin>>v[i];

            if(i%2){
                diffSum += v[i];
            }else{
                diffSum-=v[i];
            }
        }

        if(n%2 ==1 || diffSum>=0){
            cout<<"Yes"<<endl;
        }else{
            cout<<"No"<<endl;
        }
    }
    return 0;
}