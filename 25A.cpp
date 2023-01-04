#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long
 
int main(){
    ll n;
    cin>>n;

    vector<int> v(n);

    ll cnt_odd =0,cnt_even=0;

    for(int i=0;i<n;i++){
        cin>>v[i];

        if(v[i]%2==0){
            cnt_even++;
        }else{
            cnt_odd++;
        }
    }

    if(cnt_odd<cnt_even){
        for(int i=0;i<n;i++){
            if(v[i]%2==1){
                cout<<i+1<<endl;
                return 0;
            }
        }
    }else{
        for(int i=0;i<n;i++){
            if(v[i]%2==0){
                cout<<i+1<<endl;
                return 0;
            }
        }
    }
    return 0;
}