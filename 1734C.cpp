#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll int t;
    cin>>t;

    while(t--){
        ll int n;
        cin>>n;

        string str;
        cin>>str;

        vector<bool> check(n+1);

        for(int i=1;i<=n;i++){
            check[i]=(str[i-1] == '1');
        }

        vector<ll int> cost(n+1);

        for(int i=n;i>=1;i--){
            for(int j=i; j<=n; j+=i){
                if(check[j]){
                    break;
                }else{
                    cost[j] = i;
                }
            }
        }

        // for(int i=1;i<=n;i++){
        //     cout<<cost[i]<<" ";
        // }

        // cout<<endl;

        ll ans = 0;
        for(int i=1;i<=n;i++){
            if(!check[i]){
                ans+=cost[i];
            }
        }

        cout<<ans<<endl;
    }
    return 0;
}