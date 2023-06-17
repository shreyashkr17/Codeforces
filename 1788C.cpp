#include <iostream>
// #include <bits/stdc++.h>
using namespace std;
#define ll long long
 
int main(){
    ll t;
    cin>>t;

    while(t--){
        ll n;
        cin>>n;

        if(n%2 == 0){
            cout<<"No"<<endl;
        }else{
            cout<<"Yes"<<endl;
            for(int i = 0;i<(n+1)/2;i++){
                cout<<2*i+1<<" "<<3*n/2-i+1<<endl;
            }
            for(int i = 1;i<=n/2;i++){
                cout<<2*i<<" "<<2*n-i+1<<endl;
            }
        }
    }
    return 0;
}