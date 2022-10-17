#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define frn(n) for(int i = 0; i<n; i++)
#define frni(n, k) for(int i = k; i<n; i++)
#define frnj(n, k) for(int j = k; j<n; j++)
#define vctri vector<int>
#define vctrl vector<ll>
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
int main(){
    ll t;
    cin>>t;

    while(t--){
        ll n;
        cin>>n;

        vctrl v(n);
        frn(n){
            cin>>v[i];
        }

        string s;
        cin>>s;

        bool flag = true;

        map<int,char> m;

        frn(n){
            if(!m.count(v[i])){
                m[v[i]] = s[i];
            }else if(m.count(v[i])){
                char y= m[v[i]];
                if(y==s[i]){
                    m[v[i]] = s[i];
                }else{
                    flag = false;
                    break;
                }
            }
        }

        if(flag){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}