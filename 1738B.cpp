#include <iostream>
#include <bits/stdc++.h>
using namespace std;
 
#define ll long long 
 
void ans(){
    ll int n,k;
    cin>>n>>k;
 
    vector<ll int> prefixSum(n+1);
 
    for(int i=n-k+1;i<=n;i++){
        cin>>prefixSum[i];
    }
 
    if(k==1){
        cout<<"Yes"<<endl;
        return;
    }
 
    vector<ll int> v(n+1);
 
    for(int i=n-k+2;i<=n;i++){
        v[i] = prefixSum[i]-prefixSum[i-1];
    }
 
    if(!is_sorted(v.begin()+n-k+2,v.end())){
        cout<<"No"<<endl;
        return;
    }
        
    if(prefixSum[n-k+1]>v[n-k+2]*(n-k+1))
    {
        cout<<"No"<<endl;
        return;
    }else{
        cout<<"Yes"<<endl;
        return;
    }
}
int main(){
    ll int t;
    cin>>t;
 
    while(t--){
        ans();
    }
    return 0;
}