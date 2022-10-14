#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define ll long long 
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll a,b,c;
        cin>>a>>b>>c;

        if((a+b==c) || (b+c==a) || (c+a==b)){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }

    return 0;
}