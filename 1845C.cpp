#include <iostream>
// #include <bits/stdc++.h>
#include <vector>
#include <queue>
using namespace std;
#define ll long long
 
int main(){
    ll t;
    cin>>t;

    while(t--){
        string s;
        cin>>s;

        ll n = s.size();

        ll m;
        cin>>m;

        string left,right;
        cin>>left>>right;

        int mx= 0 ;
        for(int i = 0;i<m;i++){
            int l = left[i]-'0';
            int r = right[i]-'0';

            int nmx = mx;
            for(int i = l;i<=r;i++){
                int curr = mx;
                while(curr < n && (s[curr]-'0') != i){
                    curr++;
                }
                nmx = max(nmx,curr);
            }
            mx = nmx+1;
        }

        if(mx > n){
            cout<<"Yes"<<endl;
        }else{
            cout<<"No"<<endl;
        }

    }
    return 0;
}