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

        ll ans = 0;

        vector<ll> temp(n);

        for(int i=0;i<n;i++){
            temp[i] = v[i];
        }

        reverse(temp.begin(),temp.end());

        if(is_sorted(v.begin(),v.end())){
            ans = 0;
        }else{

            ll avg = 0;
            for(int i=0;i<n-1;i++){
                if(v[i]>v[i+1]){
                    avg = max(avg,((v[i]+v[i+1]+1)/2));
                }
            }

            for(int i=0;i<n;i++){
                v[i] = abs(v[i]-avg);
            }

            if(is_sorted(v.begin(),v.end())){
                ans = avg;
            }else{
                ans = -1;
            }
        }

        cout<<ans<<endl;

    }
    return 0;
}