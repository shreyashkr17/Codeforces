#include <iostream>
// #include <bits/stdc++.h>
#include <vector>
using namespace std;
#define ll long long
 
int main(){
    ll t;
    cin>>t;

    while(t--){
        ll n;
        cin>>n;

        vector<int> v(n);

        for(int i =0;i<n;i++){
            cin>>v[i];
        }

        ll minOp = 0;
        ll maxSum = 0;

        for(int i= 0;i<n;i++){
            maxSum+= abs(v[i]);
        }
        // ll temp = 0;
        bool negativeSeen = false;
        for(int i = 0;i<n;i++){
            if(v[i] < 0 && !negativeSeen){
                negativeSeen = true;
                minOp++;
            }

            if(v[i] > 0){
                negativeSeen = false;
            }
        }

        cout<<maxSum<<" "<<minOp<<endl;
    }
    return 0;
}