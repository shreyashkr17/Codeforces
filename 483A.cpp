#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long
 
int main(){
    ll a,b;
    cin>>a>>b;

    if(a&1){
        a++;
    }

    if(abs(a-b)<2){
        cout<<-1<<endl;
    }else{
        if(a%2==0){
            cout<<a<<" "<<a+1<<" "<<a+2<<endl;
        }else{
            cout<<a+1<<" "<<a+2<<" "<<a+3<<endl;
        }
    }
    return 0;
}