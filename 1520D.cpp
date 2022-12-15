#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long
 
int main(){
    ll t;
    cin>>t;

    while(t--){
        ll n;
        cin>>n;

        vector<int> v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }

        map<int,int> m;
        int res = 0;
        for(int i=0;i<n;i++){
            int x = v[i]-i;
            res+=m[x];
            m[x]++;
        }

        cout<<res<<endl;
    }
    return 0;
}