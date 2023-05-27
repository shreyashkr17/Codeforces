#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
    int n,q;
    cin>>n>>q;

    // vector<int> v1(n),v2(q);

    // for(int i =0 ;i<n;i++){
    //     cin>>v1[i];
    // }
    // for(int i =0 ;i<q;i++){
    //     cin>>v2[i];
    // }

    vector<long long> prefStrSum;

    prefStrSum.push_back(0);

    vector<long long> prefMax;

    for(int i =0;i<n;i++){
        long long x;
        cin>>x;

        prefStrSum.push_back(prefStrSum.back()+x);
        if(i == 0){
            prefMax.push_back(x);
        }else{
            prefMax.push_back(max(prefMax.back(),x));
        }
    }


    for(int i =0 ;i<q;i++){
        int k;
        cin>>k;

        int lastInd = upper_bound(prefMax.begin(),prefMax.end(),k)-prefMax.begin();

        cout<<prefStrSum[lastInd]<<" ";
    }
    cout<<endl;
}

int main(){
    ll t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}