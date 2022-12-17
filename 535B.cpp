#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long
 
int main(){
    ll n;
    cin>>n;

    ll len = 0,cnt = 0;


    while(n){
        if(n%10==7){
            cnt+=(1<<len);
        }
        // cout<<len<<" "<<cnt<<endl;
        n/=10;
        // cout<<n<<endl;
        len++;
        // cout<<len<<endl;
    }

    for(int i=1;i<len;i++){
        cnt+=(1<<i);
    }

    cout<<(cnt+1)<<endl;
    return 0;
}