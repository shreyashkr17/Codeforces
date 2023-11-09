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

        vector<int> v;
        int flag = 0;

        for(int i =0;i<n;i++){
            ll x;
            cin>>x;

            
            int new_cnt = flag+(!v.empty() && v.back() > x);

            if(new_cnt == 0 || (new_cnt == 1 && x <= v[0])){
                v.push_back(x);
                flag = new_cnt;
                cout<<"1";
            }else{
                cout<<"0";
            }
        }

        cout<<endl;
    }
    return 0;
}