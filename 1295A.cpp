#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll int t;
    cin>>t;

    while(t--){
        ll n;
        cin>>n;

        if(n%2==1){
            cout<<7;
            n-=3;
        } 
        while(n>0){
            cout<<1;
            n-=2;
        }
        cout<<endl;
    }
    return 0;
}