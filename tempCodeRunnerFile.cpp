#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define ll long long
int main(){
    float n,k;
    cin>>n>>k;

    vector<long double> v(n);

    for(int i=0;i<n;i++){
        cin>>v[i];
    }

    sort(v.begin(),v.end());

    long double ans=0;

    for(int i=1;i<n;i++){
        ans = max(v[i]-v[i-1],ans);
    }
    
    long double initial = v[0]-0;
    long double end = k-v[n-1];

    long double res = max({ans/2,initial,end});

    // output
    cout<<setprecision(11)<<res<<endl;
    return 0;
}