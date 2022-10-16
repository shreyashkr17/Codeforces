#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    string s;
    cin>>s;

    int len=s.size();
    ll count=0;
    vector<ll> presum(len);

    for(int i=1;i<s.length();i++){
        if(s[i]==s[i-1]){
            count++;
        }
        presum[i]=count;
    }

    ll m,l,r;
    cin>>m;

    while(m--){
        cin>>l>>r;
        ll start = l-1;
        ll end = r-1;

        cout<<presum[end]-presum[start]<<endl;
    }

    return 0;
}