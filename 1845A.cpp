#include <iostream>
// #include <bits/stdc++.h>
#include <vector>
using namespace std;
#define ll long long
 
int main(){
    ll t;
    cin>>t;

    while(t--){
        ll n,k,x;
        cin>>n>>k>>x;

        if(x!= 1){
            cout<<"Yes"<<endl;
            cout<<n<<endl;
            for(int i =0 ;i<n;i++){
                cout<<1<<" ";
            }
            cout<<endl;
        }else if(k == 1 || (k==2 && n%2==1)){
            cout<<"No"<<endl;
        }else{
            cout<<"Yes"<<endl;
            cout<<n/2<<endl;
            if(n%2){
                cout<<3<<" ";
            }else{
                cout<<2<<" ";
            }

            for(int i = 0;i<n/2-1;i++){
                cout<<2<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}