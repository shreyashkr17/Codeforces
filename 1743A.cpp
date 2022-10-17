#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll facto(int n);

ll nCr(int n){
    return (facto(n)/(2*facto(n-2)));
}

ll facto(int n){
    if(n==0){
        return 1;
    }

    int res=1;

    for(int i=2;i<=n;i++){
        res = res*i;
    }
    return res;
}
 
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

        ll res1 = (10-n);

        ll total = nCr(res1);

        cout<<total*6<<endl;

    }
    return 0;
}