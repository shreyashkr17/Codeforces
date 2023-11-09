#include <iostream>
// #include <bits/stdc++.h>
#include <vector>
#include <set>
using namespace std;
#define ll long long
 
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;

        vector<int> v(n);
        ll cntNeg = 0;
        for(int i =0;i<n;i++){
            cin>>v[i];
            if(v[i] == -1){
                cntNeg++;
            }
        }

        ll x = n/2;

        if(x%2){
            x-=1;
        }

        cout<<max((cntNeg-x),cntNeg%2)<<endl;
    }
    return 0;
}