#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        vector<int> v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }

        sort(v.begin(),v.end(),greater<int>());

        for(int i=0;i<n;i++){
            cout<<v[i]<<" ";
        }
    }
    return 0;
}