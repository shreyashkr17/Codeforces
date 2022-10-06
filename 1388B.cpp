#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define ll long long
int main(){
    ll int t;
    cin>>t;

    while(t--){
        ll int n;
        cin>>n;

        ll int x = (n+3)/4;

        for(int i=0;i<n-x;i++){
            cout<<9;
        } 
        for(int i=0;i<x;i++){
            cout<<8;
        }
        cout<<endl;
    }
    return 0;
}