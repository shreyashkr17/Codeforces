#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long

string DecimaltoBinary(int num){
    string str;
    while(num){
        if(num & 1){
            str+='1';
        }else{
            str+='0';
        }

        num/=2;
    }

    return str;
}
 
int main(){
    ll n,m,k;
    cin>>n>>m>>k;

    ll t = m+1;
    vector<ll> v(t);

    for(int i=0;i<t;i++){
        cin>>v[i];
    }
    ll cnt_ans = 0;

    for(ll i=0;i<t-1;i++){
        ll tx = v[t-1];
        ll temp = v[i]^tx;
        string str = DecimaltoBinary(temp);

        // cout<<str<<endl;

        ll len = str.length();
        // cout<<len<<endl;
        ll cnt = 0;

        for(int j=0;j<len;j++){
            if(str[j]=='1'){
                cnt++;
            }
        }

        // cout<<cnt<<endl;

        if(cnt<=k){
            cnt_ans++;
        }

        // cout<<"COUNT ANS:"<<cnt_ans<<endl;
    }

    cout<<cnt_ans<<endl;
    return 0;
}