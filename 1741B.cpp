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

        ll int x=n/2;

        vector<ll int> ans;

        if(n==3){
            cout<<-1;
        }else{
            for(int i=x+1;i<=n;i++){
                ans.push_back(i);
            }
            for(int i=1;i<=x;i++){
                ans.push_back(i);
            }
        }

        for(auto it=ans.begin();it!=ans.end();it++){
            cout<<*it<<" ";
        }
        cout<<endl;
    }
    return 0;
}