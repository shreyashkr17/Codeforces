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

        vector<int> odd,even;

        for(int i=0;i<n;i++){
            if(v[i]&1){
                odd.push_back(v[i]);
            }else{
                even.push_back(v[i]);
            }
        }

        if((is_sorted(odd.begin(),odd.end())) && is_sorted(even.begin(),even.end())){
            cout<<"Yes"<<endl;
        }else{
            cout<<"No"<<endl;
        }
    }
    return 0;
}   