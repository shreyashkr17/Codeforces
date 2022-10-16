#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define ll long long

int signum(int x){
    if(x>0){
        return 1;
    }else{
        return -1;
    }
}
int main(){
    ll t;
    cin>>t;

    while(t--){
        ll n;
        cin>>n;

        vector<ll> v(n);

        for(int i=0;i<n;i++){
            cin>>v[i];
        }

        ll sum =0;
        for(int i=0;i<n;i++){
            ll j=i;
            ll current = v[i];

            while(j<n && signum(v[i])==signum(v[j])){
                current = max(current, v[j]);
                j++;
            }

            sum+=current;
            i=j-1;
        }
        cout<<sum<<endl;
    }
    return 0;
}