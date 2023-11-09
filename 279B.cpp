#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long
 
int main(){
    ll n,t;
    cin>>n>>t;

    vector<int> v(n);
    for(int i = 0;i<n;i++){
        cin>>v[i];
    }

    int j=  -1;
    int sum = 0;
    int ans = 0;
    for(int i =0;i<n;i++){
        if(sum+v[i]<=t){
            sum+=v[i];
            // ans = max(ans,i-j);
        }else{
            sum+=v[i];
            while(sum>t){
                j++;
                sum-=v[j];
            }
        }

        ans = max(ans,i-j);
    }

    cout<<ans<<endl;
    return 0;
}