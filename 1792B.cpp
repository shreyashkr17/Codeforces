#include <iostream>
// #include <bits/stdc++.h>
using namespace std;
#define ll long long
 
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll a1,a2,a3,a4;

        cin>>a1>>a2>>a3>>a4;

        ll timeAns = 1;
        if(a1 != 0){
            timeAns = a1+2*min(a2,a3)+min(abs(a2-a3)+a4,a1+1);
            cout<<timeAns<<endl;
        }else{
           cout<<timeAns<<endl;
        }

    }
    return 0;
}