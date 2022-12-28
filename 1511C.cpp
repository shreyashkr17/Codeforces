#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long
 
int main(){
    ll n,q;
    cin>>n>>q;

    vector<int> v(n);

    for(int i=0;i<n;i++){
        cin>>v[i];
    }

    ll position = 0;

    while(q--){
        ll x;
        cin>>x;

        for(int i=0;i<n;i++){
            if(v[i]==x){
                position = i+1;
                break;
            }
        }
        cout<<position<<" ";

        rotate(v.begin(),v.begin()+position-1,v.begin()+position);
    }
    return 0;
}