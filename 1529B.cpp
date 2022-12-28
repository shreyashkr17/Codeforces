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

        ll tot_cnt = 0;

        vector<ll> v(n);
        for(int i = 0;i<n;i++){
            cin>>v[i];

            if(v[i]<=0){
                tot_cnt++;
            }
        }

        sort(v.begin(),v.end());

        ll mn_num = INT_MAX;
        bool flag = false;

        for(int i=0;i<n;i++){
            if(v[i]>0){
                mn_num = min(mn_num,v[i]);
            }

            if(mn_num<INT_MAX){
                flag = true;
            }
        }

        for(int i = 1;i<n;i++){
            if(v[i] <= 0){
                flag &=(abs(v[i]-v[i-1]) >=mn_num); 
            }
        }

        if(flag){
            cout<<tot_cnt+1<<endl;
        }else{
            cout<<tot_cnt<<endl;
        }
    }
    return 0;
}