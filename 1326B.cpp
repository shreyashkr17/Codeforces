#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define ll long long
int main(){
    ll int n;
    cin>>n;

    vector<ll int> b(n);
    for(int i=0;i<n;i++){
        cin>>b[i];
    }

    vector<ll int> a(n);
    a[0]=b[0];
    ll max_no = a[0]; 
    for(int i=1;i<n;i++){
        a[i]=max_no+b[i];
        max_no = max(max_no,a[i]);
    }

    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    return 0;
}