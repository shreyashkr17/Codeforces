#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long
 
int main(){
    ll t;
    cin>>t;

    while(t--){
        string s;

        cin>>s;

        int n = s.length();

        ll ans = 0;

        for(int i=0;i<n;i++){
            if(s[i]>='0' && s[i]<='9'){
                ans+=(s[i]-'0');
            }
        }

        cout<<ans<<endl;
    }
    return 0;
}   