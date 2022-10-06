#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define ll long long
int main(){
    ll int n;
    cin>>n;

    vector<ll int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }        

    ll int cntodd=0,cnteven=0;

    for(int i=0;i<n;i++){
        if(v[i]&1){
            cntodd++;
        }else{
            cnteven++;
        }
    }     

    cout<<min(cntodd,cnteven)<<endl;   
    return 0;
}