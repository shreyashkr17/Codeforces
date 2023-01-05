#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long
 
int main(){
    ll n,a,b,c;
    cin>>n>>a>>b>>c;
    

    ll cnt = 0;

    for(ll i=0;i*a<=n;i++){
        for(ll j=0;i*a+j*b <= n;j++){
            ll k = (n - i*a - j*b)/c;
            if(i*a+j*b+k*c == n){
                cnt  = max(i+j+k, cnt); 
            }
        }
    }

    cout<<cnt<<endl;
    
    return 0;
}   