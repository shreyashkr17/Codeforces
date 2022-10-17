#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define frn(n) for(int i = 0; i<n; i++)
#define frni(n, k) for(int i = k; i<n; i++)
#define frnj(n, k) for(int j = k; j<n; j++)
#define vctri vector<int>
#define vctrl vector<ll>
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()

vctri preCalculate[1001];

int main(){
    frni(1001,1){
        frnj(1001,1){
            if(__gcd(i,j)==1){
                preCalculate[i].push_back(j);
            }
        }
    }   

    ll t;
    cin>>t;

    while(t--){
        ll n;
        cin>>n;

        vctri ans[1001];
        frn(n){
            ll x;
            cin>>x;

            ans[x].push_back(i+1);
        }

        int sum = -1;

        frni(1001,1){
            for(auto j: preCalculate[i]){
                if(!ans[i].empty() && !ans[j].empty()){
                    sum = max(sum, ans[i].back()+ans[j].back());
                }
            }
        }

        cout<<sum<<endl;
    }     
    return 0;
}