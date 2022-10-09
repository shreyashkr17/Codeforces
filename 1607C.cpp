#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        vector<int> v(n);

        for(int i=0;i<n;i++){
            cin>>v[i];
        }

        sort(v.begin(),v.end());

        int ans = v[0];
        for(int i=0;i<n-1;i++){
            ans = max(ans,v[i+1]-v[i]);
        }

        cout<<ans<<endl;
        
    }
    return 0;
}