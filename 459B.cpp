#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long
 
int main(){
    ll n;
    cin>>n;

    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }

    sort(v.begin(),v.end());

    int max_diff = abs(v[0]-v[n-1]);
    cout<<max_diff<<" ";
    ll cnt_min = 0,cnt_max = 0;
    for(int i=0;i<n;i++){
        if(v[i]==v[0]){
            cnt_min++;
        }else if(v[i]==v[n-1]){
            cnt_max++;
        }
    }

    if(v[0] == v[n-1]){
        cout<<(n*(n-1))/2<<endl;
    }else{
        cout<<cnt_min*cnt_max<<endl;
    }
    return 0;
}