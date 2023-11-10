#include <iostream>
#include <bits/stdc++.h>
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

        vector<vector<int>> indexHash(102);
        for(int i = 0;i<n;i++){
            indexHash[v[i]].push_back(i);
        }

        vector<int>b(n,1);
        int k = 2;

        for(int i = 0;i<102;i++){
            if(indexHash[i].size()>=2){
                b[indexHash[i][0]] = k;
                k++;
                if(k>3){
                    break;
                }
            }
        }

        if(k<=3){
            cout<<"-1"<<endl;
        }else{
            for(auto x:b){
                cout<<x<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}