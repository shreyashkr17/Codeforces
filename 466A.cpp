#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define ll long long
int main(){
    ll int n,m,a,b;
    cin>>n>>m>>a>>b;

    if(m*a<=b){
        cout<<n*a<<endl;
    }else{
        ll int ans = (((n/m)*b)+(min((n%m)*a,b)));
        cout<<ans<<endl;
    }
    return 0;
}