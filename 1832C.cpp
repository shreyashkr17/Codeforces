#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
    int n;
    cin>>n;

    vector<int> arr(n);

    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
    n = unique(arr.begin(),arr.end())-arr.begin();
    // cout<<"n:"<<n<<endl;
    int ans = n;
    for(int i =0;i+2<n;i++){
        // cout<<"i:"<<i<<endl;
        ans -= (arr[i]<arr[i+1] && arr[i+1] < arr[i+2]);
        // cout<<"preocess:"<<"  i:"<<i<<"compute: "<<(arr[i]<arr[i+1] && arr[i+1] < arr[i+2])<<endl;
        // cout<<"ans:"<<ans<<endl;
        ans -= (arr[i]>arr[i+1] && arr[i+1] > arr[i+2]);
        // cout<<"ans:"<<ans<<endl;
    }

    cout<<ans<<endl;

}

int main(){
    ll t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}