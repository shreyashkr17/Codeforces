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

        string s;
        cin>>s;

        ll cntzero = 0,cntone = 1;

        for(int i=0;i<n;i++){
            if((s[i]) == '1'){
                cntone++;
            }else{
                cntzero++;
            }
        }

        if(cntzero%2==0 || cntzero ==1){
            cout<<"BOB"<<endl;
        }else{
            cout<<"ALICE"<<endl;
        }
    }
    return 0;
}