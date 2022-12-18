#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long
 
int main(){
    ll t;
    cin>>t;

    while(t--){
        int arr[2][2];

        for(int i=0;i<2;i++){
            for(int j=0;j<2;j++){
                cin>>arr[i][j];
            }
        }

        bool flag = false;
        for(int i=0;i<=4;i++){
            if((arr[0][0]<arr[0][1]) && (arr[0][0]<arr[1][0]) && (arr[0][1]<arr[1][1]) && (arr[1][1]>arr[1][0])){
                flag=true;
                break;
            }else{
                ll temp = arr[0][0];
                arr[0][0] = arr[1][0];
                arr[1][0] = arr[1][1];
                arr[1][1] = arr[0][1];
                arr[0][1] = temp;
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