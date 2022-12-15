#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long
 
int main(){
    ll t;
    cin>>t;

    while(t--){
        ll n,x;
        cin>>n>>x;

        vector<ll> arr(n);

        for(int i=0;i<n;i++){
            cin>>arr[i];
        }

        vector<ll> cntmul(n);

        for(int i=0;i<n;i++){
            ll val = arr[i];
            ll count = 1;
            while(val%x==0){
                val/=x;
                count++;
            }

            cntmul[i]=count;
        }

        ll int max = INT_MAX;
        ll int stind = 0;

        for(int i=0;i<n;i++){
            if(cntmul[i]<max){
                stind = i;
                max=cntmul[i];
            }
        }

        // cout<<max<<" "<<stind<<endl;
        ll ansSum = 0;

        for(int i = stind;i<n;i++){
            ansSum+=(max*arr[i]);
        }

        for(int j=stind-1;j>=0;j--)
        {
            ansSum+=((max+1)*arr[j]);
        }

        cout<<ansSum<<endl;
    }
    return 0;
}