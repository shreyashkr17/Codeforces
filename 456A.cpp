#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define ll long long
int main(){
    ll n,a,b;
    cin>>n;

    for(int i=0;i<n;i++){
        cin>>a>>b;
        if(a!=b){
            cout<<"Happy Alex";
            return 0;
        }
    }
    cout<<"Poor Alex";
    return 0;
}