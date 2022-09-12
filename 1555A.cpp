#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin>>t;

    while(t--){
        ll int n;
        cin>>n;

        ll int ans=0;

        if(n<=6){
            ans=15;
        }else{
            ans=((n+1)/2)*5;
        }

        cout<<ans<<endl;
    }
    return 0;
}