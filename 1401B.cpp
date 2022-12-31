#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long
 
int main(){
    ll t;
    cin>>t;

    while(t--){
        ll x1,y1,z1;
        cin>>x1>>y1>>z1;

        ll x2,y2,z2;
        cin>>x2>>y2>>z2;

        ll m = min(x1,z2);
        x1-=m;
        z2-=m;

        m = min(y1,x2);
        y1-=m;
        x2-=m;

        m = min(z1,y2);
        z1-=m;
        y2-=m;

        ll sum = 2*m;
        sum-=2*min(y1,z2);
        cout<<sum<<endl;
    }
    return 0;
}