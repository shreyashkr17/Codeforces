#include <iostream>
// #include <bits/stdc++.h>
using namespace std;
#define ll long long
 
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;

        string s;
        cin>>s;

        ll ans = n-1;
        for(int i = 1;i+1<=n;i++){
            if(s[i-1] == s[i+1]){
                ans--;
            }
        }

        cout<<ans<<endl;
    }
    return 0;
}