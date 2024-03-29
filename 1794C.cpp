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

        vector<int> a(n);
        for(int i = 0;i<n;i++){
            cin>>a[i];
        }

        vector<int> res;

        for(int i = 0;i<n;i++){
            int l = 1, r= i+1;
            while(l <= r){
                int m = (l+r)>>1;
                if(a[i-m+1] >= m){
                    l = m+1;
                }else{
                    r = m-1;
                }
                // cout<<"l: "<<l<<" r: "<<r<<endl;
            }

            res.push_back(r);
        }

        for(auto i: res){
            cout<<i<<" ";
        }
        cout<<endl;
    }
    return 0;
}