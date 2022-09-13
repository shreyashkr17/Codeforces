#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;

    while(t--){
        int n,m;
        cin>>n>>m;

        char ans[101][101];
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(i==0 && j==0){
                    ans[i][j] = 'W';
                }else{
                    ans [i][j] = 'B';
                }
            }
        }

        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cout<<ans[i][j];
            }
            cout<<endl;
        }
    }
    return 0;
}