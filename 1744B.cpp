#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define frn(n) for(int i = 0; i<n; i++)
#define frni(n, k) for(int i = k; i<n; i++)
#define frnj(n, k) for(int j = k; j<n; j++)
#define vctri vector<int>
#define vctrl vector<ll>

int main(){
    int t;	cin>>t;
    while(t--){
        int n, m;   cin>>n>>m;
        vctrl arr(n);
 
        int odd_cnt = 0, even_cnt = 0;
        ll odd_sum = 0, even_sum = 0;
        frn(n){
            cin>>arr[i];
            if(arr[i]%2){
                odd_cnt++;
                odd_sum += arr[i];
            }
            else{
                even_cnt++;
                even_sum += arr[i];
            }
        }
 
        ll sum = 0;
        frn(m){
            int x;  cin>>x;
            ll inc; cin>>inc;
 
            if(x == 0){
                even_sum += (even_cnt*inc);
                if(inc%2 != 0){
                    odd_cnt += even_cnt;
                    even_cnt -= even_cnt;
                }
                cout<<even_sum+odd_sum<<endl;
            }
            else if(x == 1){
                odd_sum += (odd_cnt*inc);
                if(inc%2 != 0){
                    even_cnt += odd_cnt;
                    odd_cnt -= odd_cnt;
                }
                cout<<even_sum+odd_sum<<endl;
            }
        }  
    }
 return 0;
}