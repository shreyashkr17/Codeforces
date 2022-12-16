#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long
 
int main(){
    ll t;
    cin>>t;

    while(t--){
        ll n,k;
        cin>>n>>k;

        vector<int> v(n);
        int mx=INT_MIN;

        for(int i=0;i<n;i++){
            cin>>v[i];
            mx=max(mx,v[i]);
        }
        ll res= n+1;
        ll ansIndex = -100;

        if(k>n*mx){
            cout<<"-1"<<endl;
            continue;
        }else{
            
            for(int i=0;i<k;i++){
                ansIndex=-2;
                for(int j=0;j<n-1;j++){
                    if(v[j]<v[j+1]){
                        ansIndex=j;
                        break;
                    }
                }
                res = ansIndex+1;
                if(ansIndex==-2){
                    break;
                }

                v[ansIndex]++;
            }

            cout<<res<<endl;
        }
    }
    return 0;
}       