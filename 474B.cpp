#include <bits/stdc++.h>
using namespace std;

#define ll long long
int main()
{
	ll int n;
    cin>>n;

    vector<ll> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    vector<ll> preSum(n);

    for(int i=0;i<n;i++){
        if(i==0){
            preSum[0] = v[0];
        }else{
            preSum[i] = preSum[i-1]+v[i];
        }
    }

    // for(int i=0;i<n;i++){
    //     cout<<preSum[i]<<" ";
    // }
    // cout<<endl;
	ll m;
    cin>>m;

    vector<ll> del(m);

    for(int i=0;i<m;i++){
        cin>>del[i];
    }

    ll ans = 0;
    for(int i=0;i<m;i++){
        ans = (lower_bound(preSum.begin(),preSum.end(),del[i])-preSum.begin())+1;
        cout<<ans<<endl;
    }
    cout<<endl;
	return 0;
}
