#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define ll long long
int main(){
    ll t;
    cin>>t;

    while(t--){
        ll int n;
        cin>>n;

        for(int i=1;i<=n;i++){
            for(int j=1;j<=i;j++){
                if(j==1 || j==i){
                    cout<<"1"<<" ";
                }else{
                    cout<<"0"<<" ";
                }
            }
            cout<<endl;
        }
    }
    return 0;
}