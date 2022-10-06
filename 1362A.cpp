#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long 
int main(){
    ll int t;
    cin>>t;

    while(t--){
        ll int n1,n2;
        cin>>n1>>n2;

        ll cnt = 0;
        if(n1==n2){
            cout<<0<<endl;
            continue;
        }
        if(n1>n2){
            while(n1>n2){
                if(n1%8==0 && n1/8>=n2){
                    n1/=8;
                    cnt++;
                }else if(n1%4==0 && n1/4>=n2){
                    n1/=4;
                    cnt++;
                }else if(n1%2==0 && n1/2>=n2){
                    n1/=2;
                    cnt++;
                }else{
                    break;
                }
            }
        }else{
            while(n1<n2){
                if(n1*8<=n2){
                    n1*=8;
                    cnt++;
                }else if(n1*4<=n2){
                    n1*=4;
                    cnt++;
                }else if(n1*2<=n2){
                    n1*=2;
                    cnt++;
                }else{
                    break;
                }
            }
        }

        if(n1==n2){
            cout<<cnt<<endl;
        }else{
            cout<<-1<<endl;
        }
    }
    return 0;
}