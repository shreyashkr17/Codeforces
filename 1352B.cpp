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

        ll num1 = (n-k+1);
        if( num1> 0 && num1%2==1){
            cout<<"YES"<<endl;
            for(int i=0;i<k-1;i++){
                cout<<"1 ";
            }
            cout<<num1<<endl;
            continue;
        }
        ll num2 = n-2*(k-1);
        if(num2 > 0 && num2%2==0){
            cout<<"YES"<<endl;
            for(int i=0;i<k-1;i++){
                cout<<"2 ";
            }
            cout<<num2<<endl;
            continue;
        }
        
        cout<<"NO"<<endl;
        
    }
    return 0;
}