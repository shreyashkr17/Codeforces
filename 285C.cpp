#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long
 
int main(){
    ll n;
    cin>>n;

    vector<ll> v(n);

    for(int i=0;i<n;i++){
        cin>>v[i];
    }

    sort(v.begin(),v.end());

    ll ansCnt= 0;
    for(int i=0;i<n;i++){
        ansCnt += abs(v[i]-(i+1));
    }

    cout<<ansCnt<<endl;
    return 0;
}