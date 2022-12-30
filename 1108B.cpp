#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long
 
int main(){
    ll n;
    cin>>n;
    
    
    multiset<int> v;

    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.insert(x);
    }

    int mx = *prev(v.end());
    // cout<<mx<<endl;

    for(int i = 1;i<=mx;i++){
        if(mx % i == 0){
            v.erase(v.find(i));
        }
    }

    cout<<mx<<" "<<*prev(v.end())<<endl;

    
    return 0;
}