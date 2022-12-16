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

        if(is_sorted(v.begin(),v.end())){
            cout<<"Yes"<<endl;
        }else{
            for(int i=0;i<n-1;i++){
                if((v[i]+v[i+1])%2!=0 && (v[i]>v[i+1])){
                    swap(v[i],v[i+1]);
                }
            }

            if(is_sorted(v.begin(),v.end())){
                cout<<"Yes"<<endl;
            }else{
                cout<<"No"<<endl;
            }
        }
    }
    return 0;
}   