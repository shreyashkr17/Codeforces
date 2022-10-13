#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define ll long long
int main(){
    ll t;
    cin>>t;

    while(t--){
        ll angle;
        cin>>angle;

        ll res = (180-angle);

        if(360%res == 0){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}