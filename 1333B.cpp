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

        vector<ll> a(n),b(n);

        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n;i++){
            cin>>b[i];
        }
        vector<pair<ll,ll>> vp = {{-1,0},{1,0}};

        bool flag = true;

        for(int i=0;i<n;i++){
            if((a[i]<b[i]) && vp[1].second == 0){
                flag = false;
                break;
            }else if(a[i]>b[i] && vp[0].second == 0){
                flag=false;
                break;
            }

            if(a[i] == -1){
                vp[0].second = 1;
            }

            if(a[i] == 1){
                vp[1].second = 1;
            }
        }

        if(flag){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }

    }
    return 0;
}