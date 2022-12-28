#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long
 
int main(){
    ll t;
    cin>>t;

    while(t--){
        ll n;
        cin>>n;

        vector<int> v(n);
        int cnt0=0,cnt1=0;

        for(int i=0;i<n;i++){
            cin>>v[i];

            if(v[i]){
                cnt1++;
            }else{
                cnt0++;
            }
        }

        if(cnt0>=(n/2)){
            ll ansCnt = cnt0;
            cout<<ansCnt<<endl;
            for(int i=0;i<cnt0;i++){
                cout<<"0"<<" ";
            }
            cout<<endl;
        }else{
            ll ansCnt = cnt1-(cnt1%2);

            cout<<ansCnt<<endl;
            for(int i=0;i<ansCnt;i++){
                cout<<"1"<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}