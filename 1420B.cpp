#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long
 
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

        ll tot = 0,res = 0;

        for(int j=29;j>=0;j--){
            tot = 0;

            for(int i=0;i<n;i++){
                if(v[i]<(1<<(j+1)) && v[i]>=(1<<j)){
                    tot++;
                }
            }

            res+=((tot*(tot-1))/2);
        }

        cout<<res<<endl;
    }
    return 0;
}