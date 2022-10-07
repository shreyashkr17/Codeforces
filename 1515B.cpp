#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long

bool isRoot(int n){
    int x = sqrt(n);

    return (x*x==n);
}

int main(){
    ll int t;
    cin>>t;

    while(t--){
        ll n;
        cin>>n;

        if(n%2==0 && isRoot(n/2)){
            cout<<"YES"<<endl;
        }else if(n%4==0 && isRoot(n/4)){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}