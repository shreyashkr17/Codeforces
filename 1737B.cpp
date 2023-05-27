#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll sqrtNum(ll n){
    ll left = 0,right = 2000000123;

    while(left < right){
        ll mid = (left + right)>>1;
        if(mid*mid > n){
            right = mid;
        }else{
            left = mid+1;
        }
    }

    return left-1;

}

void solve(){
    ll left,right;
    cin>>left>>right;

    ll leftRoot = sqrtNum(left),rightRoot = sqrtNum(right),ans;
    // cout<<(leftRoot==rightRoot)<<endl;

    if(leftRoot == rightRoot){
        ans = 0;
        for(int i = 0;i<3;i++){
            if(left <= leftRoot*(leftRoot+i) && leftRoot*(leftRoot+i) <= right){
                // cout<<left<<" "<<leftRoot*(leftRoot+i)<<" "<<right<<endl;
                ans++;
            }
        }
    }else{
        ans = (rightRoot-leftRoot-1)*3;
        for(int i = 0;i<3;i++){
            if(left <= leftRoot*(leftRoot+i) && leftRoot*(leftRoot+i) <= right){
                ans++;
            }
            if(left <= rightRoot*(rightRoot+i) && rightRoot*(rightRoot+i) <= right){
                ans++;
            }
        }
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