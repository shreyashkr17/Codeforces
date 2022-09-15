#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ll int t;
    cin>>t;

    while(t--){
        ll int a,b;
        cin>>a>>b;

        ll int diff=abs(a-b);

        if(a>b){
            cout<<diff<<" "<<min(diff-(a%diff),b%diff)<<endl;
        }else if(b>a){
            cout<<diff<<" "<<min(diff-(b%diff),a%diff)<<endl;
        }else{
            cout<<"0"<<" "<<"0"<<endl;
        }
    }
    return 0;
}