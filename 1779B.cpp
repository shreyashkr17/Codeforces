#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long
 
int main(){
    ll t;
    cin>>t;

    while(t--){
        ll num;
        cin>>num;

        if(num%2==0){
            cout<<"YES"<<endl;
            for(int i=0;i<(num/2);i++){
                cout<<"1 -1 ";
            }
            cout<<endl;
        }else if(num==3){
                cout<<"NO"<<endl;
        }else{
            cout<<"YES"<<endl;
            ll half = num/2;
            for(int i = 0;i<(num/2);i++){
                cout<<1-half<<" "<<half<<" ";
            }
            cout<<1-half<<endl;
        }
    }
    return 0;
}       