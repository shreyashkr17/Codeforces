#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long
 
int main(){
    ll n;
    cin>>n;

    map<string,ll> ms;

    while(n--){
        string s;
        cin>>s;

        if(ms.count(s)>0){
            cout<<s<<ms[s]<<endl;
            ms[s]++;
        }else{
           cout<<"OK"<<endl;
            ms[s] = 1; 
        }
    }
    return 0;
}