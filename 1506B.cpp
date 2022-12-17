#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long
 
int main(){
    ll t;
    cin>>t;

    while(t--){
        ll n, k;
        cin>>n>>k;

        string s;
        cin>>s;

        ll index=-1,cnt=0;
        for(int i=0;i<n;i++){
            if(s[i]=='*'){
                index=i;
                cnt++;
                break;
            }
        }

        // cout<<"Starting index:"<<index<<endl;
        while(true){
            ll endidx = min(n,index+k+1);
            // cout<<"endidx:"<<endidx<<endl;
            bool flag = false;
            for(int i=endidx-1;i>index;i--){
                if(s[i]=='*'){
                    s[i]='x';
                    cnt++;
                    index = i;
                    flag=true; 
                    break;
                }
            }
            // cout<<"Samples are: "<<s<<" "<<"2.index :"<<index<<" Count:"<<cnt<<endl;
            if(!flag){
                break;
            } 
        }

        cout<<cnt<<endl;
    }
    return 0;
}