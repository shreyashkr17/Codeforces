#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long
 
int main(){
    ll n,m;
    cin>>n>>m;

    int count = 0;

    while(n!=m){
        if(m>n){
            if(m%2==0){
                m/=2;
                count++;
            }else{
                m++;
                count++;
            }
        }else{
            m++;
            count++;
        }
    }
    cout<<count<<endl;
    return 0;
}