#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long
 
void solve(){
    int n;
    cin>>n;

    vector<long long> arr(n+1);
    for(int i =1 ;i<=n;i++){
        cin>>arr[i];
    }

    long long ans = 0;
    vector<int> vIndex;

    for(int i =1;i<=n;i++){
        if(arr[i] >= i){
            continue;
        }
        ans+=lower_bound(vIndex.begin(),vIndex.end(),arr[i])-vIndex.begin();
        // cout<<res<<" ";
        vIndex.push_back(i);
    }
    cout<<ans<<endl;
}
int main(){
    int t;
    cin>>t;

    while(t--){
        solve();
    }
    return 0;
}