#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define ll long long 
int main(){
    ll int t;
    cin>>t;

    while(t--){
        ll int n;
        cin>>n;

        vector<ll int> v(n);

        for(int i=0;i<n;i++){
            cin>>v[i];
        }

        ll int odd=0,even=0;
        for(int i=0;i<n;i++){
            if(v[i]%2==0){
                even++;
            }else{
                odd++;
            }
        }
        

        if(odd%4==2){
            cout<<"Bob"<<endl;
        }else if(odd%4==3){
            cout<<"Alice"<<endl;
        }else if(even%2==1){
            cout<<"Alice"<<endl;
        }else if(odd%4==0){
            cout<<"Alice"<<endl;
        }else{
            cout<<"Bob"<<endl;
        }
    }
    return 0;
}