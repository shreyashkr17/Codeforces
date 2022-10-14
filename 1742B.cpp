#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define ll long long

bool isIncrease(vector<int> &v){
    int n= v.size();

    for(int i=1;i<n;i++){
        if(v[i]<=v[i-1]){
            return false;
        }
    }
    return true;
}

int main(){
    ll int t;
    cin>>t;
    while(t--){
        ll int n;
        cin>>n;
        vector<int> v(n);

        for(int i=0;i<n;i++){
            cin>>v[i];
        }

        sort(v.begin(),v.end());

        if(isIncrease(v)){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}