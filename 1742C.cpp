#include <iostream>
#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
 
int main(){
    ll t;
    cin>>t;
 
    while(t--){
        string arr[8];
 
        for(int i=0;i<8;i++){
            cin>>arr[i];
        }
 
        ll int countR=0,countB=0;
        bool flag = false;
 
        for(int i=0;i<8;i++){
            countB=0;
            for(int j=0;j<8;j++){
                if(arr[j][i]=='B'){
                    countB++;
                }
            }
 
            if(countB==8){
                cout<<"B"<<endl;
                flag=true;
                break;
            }
        }
 
        if(flag==false){
            for(int i=0;i<8;i++){
                countR=0;
                for(int j=0;j<8;j++){
                    if(arr[i][j]=='R'){
                        countR++;
                    }
                }
 
                if(countR == 8){
                    cout<<"R"<<endl;
                    break;
                }
            }
        }
    }
    return 0;
}