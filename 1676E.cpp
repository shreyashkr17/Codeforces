#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll search(vector<ll>& preSum,int n,int query){
    ll start = 1,end = n,ans = -1;

    while(start<=end){
        ll mid = start+(end-start)/2;

        if(preSum[mid-1]>=query){
            ans = mid;
            end = mid-1;
        }else{
            start = mid+1;
        }
    }
    

    return ans;
}
 
int main(){
    ll t;
    cin>>t;

    while(t--){
        ll n,q;
        cin>>n>>q;

        vector<ll> v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }

        //sorting the sugar quantity reversely or descending order

        sort(v.rbegin(),v.rend());

        vector<ll> preSum(n);

        for(int i=0;i<n;i++){
            if(i==0){
                preSum[i]=v[i];
            }else{
                preSum[i]=preSum[i-1]+v[i];
            }
        }

        while(q--){
            ll query;
            cin>>query;

            ll ans = search(preSum,n,query);

            cout<<ans<<endl;
        }
    }
    return 0;
}