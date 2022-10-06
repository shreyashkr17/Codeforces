#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ll int t;
    cin>>t;

    while(t--){
        ll int n;
        cin>>n;

        vector<int> v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        } 

        bool flag = false;

        for(int i=1;i<n;i++){
            if(v[i]>=v[i-1]){
                flag = true;
                break;
            }
        }

        if(flag){
            cout<<"Yes"<<endl;
        }else{
            cout<<"No"<<endl;
        }
    }
    return 0;
}