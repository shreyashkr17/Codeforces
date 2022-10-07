#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    ll int t;
    cin>>t;

    while(t--){
        ll int x1,p1,x2,p2;
        cin>>x1>>p1>>x2>>p2;

        ll x = to_string(x1).size()+p1;
        ll y = to_string(x2).size()+p2;

        if(x>y){
            cout<<">"<<endl;
        }else if(x<y){
            cout<<"<"<<endl;
        }else{
            while(to_string(x1).size()<to_string(x2).size()){
                x1*=10;
            }while(to_string(x2).size()<to_string(x1).size()){
                x2*=10;
            }

            if(x1<x2){
                cout<<"<"<<endl;
            }else if(x1>x2){
                cout<<">"<<endl;
            }else{
                cout<<"="<<endl;
            }
        }
    }        
    return 0;
}