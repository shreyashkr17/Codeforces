#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ll n,k;
    cin>>n>>k;

    vector<int> v(n),preSum(n);

    for(int i=0;i<n;i++){
        cin>>v[i];
        if(i==0){
            preSum[0] = v[0];
        }else{
            preSum[i]= preSum[i-1]+v[i]; 
        }
    }

    ll min_sum= INT_MAX,x,ans=0;

    for(int i=0;i<n-k+1;i++){
        if(i==0){
            x = preSum[i+k-1];
        }else{
            x = preSum[i+k-1]-preSum[i-1];
        }

        if(x<0){
            x*=-1;
        }

        if(x<min_sum){
            min_sum = x;
            ans = (long long) i;
        }
    } 

    cout<<ans+1<<endl;
    return 0;
}