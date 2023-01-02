#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long
 
int main(){
    ll a1, a2;
    cin>>a1>>a2;

    ll cnt = 0;

    while(a1>0 && a2>0){
        if(a1==1 && a2==1){
            break;
        }
        
        if(a1>a2){
            a1-=2;
            a2+=1;
            cnt++;
        }else {
            a2-=2;
            a1+=1;
            cnt++;
        }
        // cout<<a1<<" "<<a2<<" "<<cnt<<endl;
    }

    cout<<cnt<<endl;
    return 0;
}