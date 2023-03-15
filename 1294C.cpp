#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long
 
int main(){
    ll t;
    cin>>t;

    while(t--){
        ll int n;
        cin>>n;

        set<int> used;

        for(int i = 2;i*i<=n;i++){
            if(n%i == 0 && !used.count(i)){
                used.insert(i);
                n/=i;
                break;
            }
        }

        for(int i=2;i*i<=n;i++){
            if(n%i == 0 && !used.count(i)){
                used.insert(i);
                n/=i;
                break;
            }
        }

        if(used.size()<2 || used.count(n) || n==1){
            cout<<"NO"<<endl;
        }else{
            cout<<"YES"<<endl;
            used.insert(n);
            for(auto it = used.begin(); it!= used.end();it++){
                cout<<*it<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}