#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ll int n,price=INT_MAX,total=0;
    cin>>n;

    while(n--){
        ll int x,p;
        cin>>x>>p;

        if(price>p){
            price = p;
        }
        total+=(price*x);
    }

    cout<<total<<endl;
    return 0;
}