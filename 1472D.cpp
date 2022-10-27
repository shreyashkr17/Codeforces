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

        vector<ll int> v(n);

        for(int i=0;i<n;i++){
            cin>>v[i];
        }

        sort(v.rbegin(),v.rend());

        ll int sum = 0;

        for(int i=0;i<n;i++){
            if(i%2==0){
                if(v[i]%2==0){
                    sum+=v[i];
                }
            }else{
                if(v[i]%2==1){
                    sum-=v[i];
                }
            }
        }

        
        if(sum==0){
            cout<<"Tie"<<endl;
        }else if(sum>0){
            cout<<"Alice"<<endl;
        }else{
            cout<<"Bob"<<endl;
        }
    }
    return 0;
}