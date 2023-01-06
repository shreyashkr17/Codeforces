#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long
 
int main(){
    ll t;
    cin>>t;

    while(t--){
        ll n,x;
        cin>>n>>x;

        vector<ll> v(n);
        
        ll cnt_odd = 0, cnt_even = 0;
        for(int i=0;i<n;i++){
            cin>>v[i];
            if(v[i]%2==1){
                cnt_odd++;
            }else{
                cnt_even++;
            }
        }

        ll mn = min(cnt_even,x-1);
        ll temp = x-mn;
        if(temp%2==0){
            temp++;
        }

        if(cnt_odd>=temp && temp<=x){
            cout<<"Yes"<<endl;
        }else{
            cout<<"No"<<endl;
        }
    }
    return 0;
}