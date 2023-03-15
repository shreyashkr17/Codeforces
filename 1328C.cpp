#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long
 
int main(){
    ll t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;
        string c;
        cin>>c;

        string a(n,'0'),b(n,'0');
        for(int i=0;i<n;i++){
            if(c[i] == '1'){
                a[i]='1';
                b[i]='0';

                for(int j=i+1;j<n;j++){
                    b[j] = c[j];
                }
                break;
            }
            else{
                a[i] = b[i] = '0'+(c[i]-'0')/2;
            }
        }
        cout<<a<<endl<<b<<endl;

    }
    return 0;
}