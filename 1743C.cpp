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

        string s;
        cin>>s;

        for(int i=0;i<n;i++){
            cin>>v[i];
        }

        ll sum =0;
        for(int i=0;i<n;i++){
            if(s[i]=='1'){
                sum+=v[i];
            }
        }

        for(int i=0;i<n;i++){
            if(s[i]=='0'){
                ll baad = i+1;
                ll chota = v[i];
                while(baad<n && s[baad]!='0'){
                    chota = min(chota,v[baad]);
                    baad++;
                }
                sum+=(v[i]-chota);
                i=baad-1;
            }
        }
        cout<<sum<<endl;
    }
    return 0;
}