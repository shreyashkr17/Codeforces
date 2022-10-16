#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ll n;
    cin>>n;

    vector<int> v(n);
    ll sum1=0,sum2=0,sum3=0;

    for(int i=0;i<n;i++){
        cin>>v[i];
        sum1+=v[i];
    }

    vector<int> error1(n-1);
    for(int i=0;i<n-1;i++){
        cin>>error1[i];
        sum2+=error1[i];
    }

    
    vector<int> error2(n-2);
    for(int i=0;i<n-2;i++){
        cin>>error2[i];
        sum3+=error2[i];
    }
    cout<<sum1-sum2<<endl;
    cout<<sum2-sum3<<endl;
    return 0;
}